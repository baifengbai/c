#ifndef _SMART_PTR
#define _SMART_PRT
#include<stdio.h>

#ifdef TRACE_SMPTR
#define TRACE printf
#else
#define TRACE
#endif

template<typename T>
class SmartPtr
{
	public:
		SmartPtr(T*p_):p(p_)
			{
				TRACE("constructor SmartPtr\n");
				p->up();
			}
		~SmartPtr()
			{
				TRACE("deconstructor SmartPtr\n");
				p->down();
			}
		operator T*(){
				TRACE("T*(void)\n");
				return p;
			}
		T& operator*(){
				return *p;
			}
		T* operator->(){
				TRACE("->\n");
				return p;
			}
		SmartPtr& operator=(SmartPtr<T>&p_)
			{
				return operator=((T*)p_);//强制类型转换
			}
		
		SmartPtr& operator=(T*p_){
				p_->up();
				p->down();
				p=p_;
				return *this;
			}
		SmartPtr(const SmartPtr<T>&p_){
				p=p_.p;
				p->up();
			}		
		private:
			T*p;

};
#endif