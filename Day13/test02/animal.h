#ifndef _ANIMAL_H_
#include<string>
using namespace::std;
namespace QiuAnimal {

	class Animal {
		public:
		Animal();
		~Animal();
		void eat();
		private:
		char *name1;
		protected:
		char *name2;

	};
	//私有继承
	class Cat:private Animal{
		public:
		Cat();
		~Cat();
		void run();
		private:
		char *name3;
	}; 

}
#endif
