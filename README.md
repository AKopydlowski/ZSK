//lista zmiennych str incjalizacja konstruktor
#include <iostream>

using namespace std;

class Worker{
	const int id{0};
	string name,surname;
	public:
		Worker();
		Worker(int id, string name, string surname);

		
		void getData();
};

Worker::Worker():
	id{-1},
	name{"IMIĘ DOMYŚLNE: "},
	surname{"NAZWISKO DOMYŚLNE: "}
	{
		cout<<"Konstruktor domyslny"<<endl;
	}
	

Worker::Worker(int pId, string pName, string pSurname):
	id{pId},
	name{pName},
	surname{pSurname}
	{
		cout<<"Konstruktor Parametrzyczny"<<endl;
	}


void Worker::getData(){
	cout<<"Id= "<<id<<endl<<"Imie i nazwisko: "<<name<<" "<<surname<<endl<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak;
	nowak.getData();
	
	Worker kowalski;
	kowalski.getData();

	return 0;
}
