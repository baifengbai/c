#include<iostream>
using namespace::std;

class student{
	public:
	student()
	{
		cout<<"student()"<<endl;
	}	
	~student()
	{
		cout<<"~student()"<<endl;
	}
	int getId() const
	{
		return my_id;
	}
	
	void setId(int Id) 
	{
		my_id = Id;
	}
	private:
		int my_id;
};

void foo(student std)
{
	std.setId(5);
	int num = std.getId();
	num =6;		
}

void bar(const student& std)
{
	//std.setId(5);会报错，对象std是const的不能修改其成员
}

int main()
{
	student std;
	
	foo(std);
	bar(std);
}
