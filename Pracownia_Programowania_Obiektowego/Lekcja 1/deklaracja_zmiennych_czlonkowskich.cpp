#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Worker {
	public:
// deklaracja zmiennych członkowskich (właściwości)
	string name="Janusz";
	string surname;
// zezwala na znak, tylko dodatnia liczba do  32767
	unsigned short age;
	
// deklaracja funkcji członkowskiej (metoda)
	void showData(){
		cout << "Imię" << endl;
	};
	
	void showName(){
		cout << name << endl;
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Worker pracownik;
	
	cout << pracownik.name << endl;
	pracownik.showData();
	pracownik.surname = "Kowalski";
	pracownik.name = "Andrzej";
	cout << "imię i nazwisko:" << pracownik.name <<" "<< pracownik.surname << endl;
	cout << "wiek" << " " << pracownik.age;
	pracownik.showName();
	return 0;
}
