#ifndef _FUNC_H_
#define _FUNC_H_


#ifdef __cplusplus
//按照C语言的格式编译，加这个是为了c语言的代码也可以被c++调用
extern "C" {
#endif

int foo(char,int);


#ifdef __cplusplus
}
#endif

#endif
