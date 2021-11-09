//destruktory postimplementacja i deklamentacja
#include <iostream>

using namespace std;

class Animal{
	public:
		static int s_count;
		
		//postimplementacja 
		Animal(){
			s_count++;
			cout<<"Iloœæ obiektów "<<s_count<<endl;
		}
		//postdeklamentacja
		~Animal(){
			s_count--;
			cout<<"Iloœæ obiektów "<<s_count<<endl;
		}
	
	
};

void createObjectAnimal(){
	Animal animal;
	cout<<"Iloœæ obiektów "<<Animal::s_count<<endl;
}

int Animal::s_count=0;


int main() {
	setlocale(LC_CTYPE, "polish");

	
	cout<<"Iloœæ obiektów "<<Animal::s_count<<endl;
	Animal dog;
	Animal cat;
	createObjectAnimal();





	return 0;
}
