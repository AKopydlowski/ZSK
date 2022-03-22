#include <iostream>
using namespace std;

class Animal{
	public:
		void className(){
			cout<<"Klasa Animal\n";
		}
		virtual void speak(){
			cout<<"DŸwiêk zwierzaka\n";
		}
};
class Dog: public Animal{
	public:
		void className(){
			cout<<"Klasa Dog\n";
		}
		virtual void speak() override{
			cout<<"WOOOOF! WOOF!\n";
		}
		
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Animal zwierze;
	zwierze.className();
	
	Dog *w_dog = new Dog();
	w_dog->className();
	w_dog->speak();
	
	Animal *w_animal = new Dog();
	w_animal->className();
	w_animal->speak();
	
	
	
	return 0;
}
