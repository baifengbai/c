1.#如果去除掉extern "C",会导致链接阶段出现错误

2.正常编译的时候
.buntu@ubuntu:~/mygit/c/Day04/test2$ objdump -t main.o

main.o:     file format elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*	0000000000000000 main.cpp
0000000000000000 l    d  .text	0000000000000000 .text
0000000000000000 l    d  .data	0000000000000000 .data
0000000000000000 l    d  .bss	0000000000000000 .bss
0000000000000000 l    d  .rodata	0000000000000000 .rodata
0000000000000000 l    d  .debug_info	0000000000000000 .debug_info
0000000000000000 l    d  .debug_abbrev	0000000000000000 .debug_abbrev
0000000000000000 l    d  .debug_aranges	0000000000000000 .debug_aranges
0000000000000000 l    d  .debug_line	0000000000000000 .debug_line
0000000000000000 l    d  .debug_str	0000000000000000 .debug_str
0000000000000000 l    d  .note.GNU-stack	0000000000000000 .note.GNU-stack
0000000000000000 l    d  .eh_frame	0000000000000000 .eh_frame
0000000000000000 l    d  .comment	0000000000000000 .comment
0000000000000000 g     F .text	000000000000003b main

#注意foo
0000000000000000         *UND*	0000000000000000 foo
0000000000000000         *UND*	0000000000000000 puts


ubuntu@ubuntu:~/mygit/c/Day04/test2$ objdump -t fun.o

fun.o:     file format elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*	0000000000000000 fun.c
0000000000000000 l    d  .text	0000000000000000 .text
0000000000000000 l    d  .data	0000000000000000 .data
0000000000000000 l    d  .bss	0000000000000000 .bss
0000000000000000 l    d  .debug_info	0000000000000000 .debug_info
0000000000000000 l    d  .debug_abbrev	0000000000000000 .debug_abbrev
0000000000000000 l    d  .debug_aranges	0000000000000000 .debug_aranges
0000000000000000 l    d  .debug_line	0000000000000000 .debug_line
0000000000000000 l    d  .debug_str	0000000000000000 .debug_str
0000000000000000 l    d  .note.GNU-stack	0000000000000000 .note.GNU-stack
0000000000000000 l    d  .eh_frame	0000000000000000 .eh_frame
0000000000000000 l    d  .comment	0000000000000000 .comment

#注意foo
0000000000000000 g     F .text	0000000000000013 foo

3.去掉extern "C"的时候：发现c++由于函数重载等原因会对函数进行命名修改为:_Z3fooci,而c语言符号仍然为:foo,导致链接失败
ubuntu@ubuntu:~/mygit/c/Day04/test2$ make clean
rm -f test *.o
ubuntu@ubuntu:~/mygit/c/Day04/test2$ ls
fun.c  fun.h  main.cpp  Makefile  readme.txt
ubuntu@ubuntu:~/mygit/c/Day04/test2$ gedit fun.h
ubuntu@ubuntu:~/mygit/c/Day04/test2$ ls
fun.c  fun.h  main.cpp  Makefile  readme.txt
ubuntu@ubuntu:~/mygit/c/Day04/test2$ make
g++ -Wall -g -c main.cpp -o main.o
gcc -Wall -g  -c fun.c -o fun.o
g++ main.o fun.o -o test 
main.o: In function `main':
/home/ubuntu/mygit/c/Day04/test2/main.cpp:8: undefined reference to `foo(char, int)'
collect2: error: ld returned 1 exit status
Makefile:21: recipe for target 'test' failed
make: *** [test] Error 1
ubuntu@ubuntu:~/mygit/c/Day04/test2$ objdump -t main.o

main.o:     file format elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*	0000000000000000 main.cpp
0000000000000000 l    d  .text	0000000000000000 .text
0000000000000000 l    d  .data	0000000000000000 .data
0000000000000000 l    d  .bss	0000000000000000 .bss
0000000000000000 l    d  .rodata	0000000000000000 .rodata
0000000000000000 l    d  .debug_info	0000000000000000 .debug_info
0000000000000000 l    d  .debug_abbrev	0000000000000000 .debug_abbrev
0000000000000000 l    d  .debug_aranges	0000000000000000 .debug_aranges
0000000000000000 l    d  .debug_line	0000000000000000 .debug_line
0000000000000000 l    d  .debug_str	0000000000000000 .debug_str
0000000000000000 l    d  .note.GNU-stack	0000000000000000 .note.GNU-stack
0000000000000000 l    d  .eh_frame	0000000000000000 .eh_frame
0000000000000000 l    d  .comment	0000000000000000 .comment
0000000000000000 g     F .text	000000000000003b main

#注意此处
0000000000000000         *UND*	0000000000000000 _Z3fooci
0000000000000000         *UND*	0000000000000000 puts


ubuntu@ubuntu:~/mygit/c/Day04/test2$ objdump -t fun.o

fun.o:     file format elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*	0000000000000000 fun.c
0000000000000000 l    d  .text	0000000000000000 .text
0000000000000000 l    d  .data	0000000000000000 .data
0000000000000000 l    d  .bss	0000000000000000 .bss
0000000000000000 l    d  .debug_info	0000000000000000 .debug_info
0000000000000000 l    d  .debug_abbrev	0000000000000000 .debug_abbrev
0000000000000000 l    d  .debug_aranges	0000000000000000 .debug_aranges
0000000000000000 l    d  .debug_line	0000000000000000 .debug_line
0000000000000000 l    d  .debug_str	0000000000000000 .debug_str
0000000000000000 l    d  .note.GNU-stack	0000000000000000 .note.GNU-stack
0000000000000000 l    d  .eh_frame	0000000000000000 .eh_frame
0000000000000000 l    d  .comment	0000000000000000 .comment
#注意此处
0000000000000000 g     F .text	0000000000000013 foo


ubuntu@ubuntu:~/mygit/c/Day04/test2$ 

