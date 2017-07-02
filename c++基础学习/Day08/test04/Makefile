CC = gcc
CXX = g++

#additional flags
#-Wall:warning
#-g:debugging

ADD_CFLAGS:= -Wall -g

#combine the flags
CFLAGS:= $(ADD_CFLAGS) $(CFLAGS)
CPPFLAGS:= $(ADD_CFLAGS)
#使用系统的链接库，后续的可以自己加，例如-lpthread
LDFLAGS := $(LDFLAGS)

targets = test
.PHONY:all
all:$(targets)

test:main.o person.o
	$(CXX) $^ -o $@ $(LDFLAGS)
main.o:main.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@
fun.o:person.cpp person.h
	$(CXX) $(CPPFLAGS) -c $< -o $@

.PHONY:clean
clean:
	$(RM) $(targets) *.o
