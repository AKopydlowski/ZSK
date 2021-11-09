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
		//Konstruktor Domy�lny
		Worker::Worker(){
			cout<<"Konstruktor Domy�lny";
		};
		
		//Konstruktor Parametryczny
		Worker::Worker(string pName, string pSurname):
			name {pName},
			surname {pSurname}
			{
				cout<<"Konstruktor Parametryczny";
			}
		
		//ustawienie metody wywo�ania
		void Worker::getData(){
			cout<<"\nImi�: "<<name<<"\nNazwisko: "<<surname;
		}



int main() {
	setlocale(LC_CTYPE, "polish");
	
	Worker pracownik = Worker("Bogdan","Boner");
	pracownik.getData();


	return 0;
}
