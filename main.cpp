#include <iostream>
#include <locale.h>
using namespace std;

class Worker{
	public:
//deklaracja zmiennych cz�onkowskich
	string name="Janusz";
	string surname;
	unsigned short int age;
// definicja funkcji cz�onkowskiej
void showName(){
		cout<<"twoje imi�: "; //zadanie dom tutaj doda� imie wykorzystuj�c funkcj� cz�onkowsk�
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
//	typ danych nazwa_zmiennej
	Worker pracownik;
	pracownik.surname ="Nowak";
	//cout<<pracownik.surname;
	pracownik.showName();
	pracownik.age=16;
	cout<<"wiek: " << pracownik.age<<endl;
	return 0;
}
