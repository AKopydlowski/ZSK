//Destruktory z wzkaünikiem
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
		//Konstruktor Domyúlny
		Worker::Worker(){
			cout<<"Konstruktor Domyúlny";
		};
		
		//Konstruktor Parametryczny
		Worker::Worker(string pName, string pSurname):
			name {pName},
			surname {pSurname}
			{
				cout<<"Konstruktor Parametryczny";
			}
		
		//ustawienie metody wywo≥ania (chyba)
		void Worker::getData(){
			cout<<"\nImiÍ: "<<name<<"\nNazwisko: "<<surname;
		}
		
		//utworzenie obiektu poza klasπ
		void createObjectWorker(string Name, string Surname){
		//	Worker *p_egzorcysta = new Worker(Name, Surname);
		//	p_egzorcysta->getData();
		Worker worker
		worker.getData();
		cout<<"Wywo≥anie funkcji createObjectWorker";
		}



int main() {
	setlocale(LC_CTYPE, "polish");
	
//	Worker pracownik = Worker("Adrian","Puchacki");
//	pracownik.getData();
	
		//wskaünik z destruktorem
//	Worker *p_egzorcysta = new Worker("Bogdan","Boner");
//	p_egzorcysta->getData();
//	delete p_egzorcysta;

		//wywo≥anie obiektu poza klasπ
//		createObjectWorker("Walo", "Walaszek");

createObjectWorker();
//	Worker *p_egzorcysta = new Worker("Bogdan","Boner");
//	p_egzorcysta->getData();
//	delete p_egzorcysta;







	return 0;
}
