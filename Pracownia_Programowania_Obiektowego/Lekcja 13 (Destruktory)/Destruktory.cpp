//Destruktory
#include <iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		
		Worker();
		
		Worker(string pName, string pSurname);
		
		//definicja destruktora
		~Worker(){
			cout<<"\nDestruktor";
		}
		
		void getData();
	
};
		//Konstruktor Domyœlny
		Worker::Worker(){
			cout<<"Konstruktor Domyœlny";
		};
		
		//Konstruktor Parametryczny
		Worker::Worker(string pName, string pSurname):
			name {pName},
			surname {pSurname}
			{
				cout<<"Konstruktor Parametryczny";
			}
		
		//ustawienie metody wywo³ania
		void Worker::getData(){
			cout<<"\nImiê: "<<name<<"\nNazwisko: "<<surname;
		}



int main() {
	setlocale(LC_CTYPE, "polish");
	
	Worker pracownik = Worker("Bogdan","Boner");
	pracownik.getData();


	return 0;
}
