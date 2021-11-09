//Destruktory z wzka�nikiem
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
		
		//ustawienie metody wywo�ania (chyba)
		void Worker::getData(){
			cout<<"\nImi�: "<<name<<"\nNazwisko: "<<surname;
		}
		
		//utworzenie obiektu poza klas�
		void createObjectWorker(string Name, string Surname){
		//	Worker *p_egzorcysta = new Worker(Name, Surname);
		//	p_egzorcysta->getData();
		Worker worker
		worker.getData();
		cout<<"Wywo�anie funkcji createObjectWorker";
		}



int main() {
	setlocale(LC_CTYPE, "polish");
	
//	Worker pracownik = Worker("Adrian","Puchacki");
//	pracownik.getData();
	
		//wska�nik z destruktorem
//	Worker *p_egzorcysta = new Worker("Bogdan","Boner");
//	p_egzorcysta->getData();
//	delete p_egzorcysta;

		//wywo�anie obiektu poza klas�
//		createObjectWorker("Walo", "Walaszek");

createObjectWorker();
//	Worker *p_egzorcysta = new Worker("Bogdan","Boner");
//	p_egzorcysta->getData();
//	delete p_egzorcysta;







	return 0;
}
