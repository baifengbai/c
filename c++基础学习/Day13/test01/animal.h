#ifndef _ANIMAL_H_
#include<string>
using namespace::std;
namespace QiuAnimal {

	class Animal {
		public:
		Animal(int age,string location);
		~Animal();
		void SetAge(int age);
		int GetAge() const;
		protected:
		string m_location;
		void SetLocation(string location);
		void GetLocation();
		private:
		int m_age;
	};
	//公有继承
	class Cat:public Animal{
		public:
		Cat(int age,int color,string location);
		~Cat();
		void SetColor(int);
		int GetColor();
		void SetLocation(string location);
		void GetLocation();
		protected:
		string mm_location; 		
		private:
		int m_color;
	}; 

}
#endif
