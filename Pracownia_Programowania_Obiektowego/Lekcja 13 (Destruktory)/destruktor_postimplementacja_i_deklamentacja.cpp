//destruktory postimplementacja i deklamentacja
#include <iostream>

using namespace std;

class Animal{
	public:
		static int s_count;
		
		//postimplementacja 
		Animal(){
			s_count++;
			cout<<"Ilo�� obiekt�w "<<s_count<<endl;
		}
		//postdeklamentacja
		~Animal(){
			s_count--;
			cout<<"Ilo�� obiekt�w "<<s_count<<endl;
		}
	
	
};

void createObjectAnimal(){
	Animal animal;
	cout<<"Ilo�� obiekt�w "<<Animal::s_count<<endl;
}

int Animal::s_count=0;


int main() {
	setlocale(LC_CTYPE, "polish");

	
	cout<<"Ilo�� obiekt�w "<<Animal::s_count<<endl;
	Animal dog;
	Animal cat;
	createObjectAnimal();





	return 0;
}
