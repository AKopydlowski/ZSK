#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Worker {
	public:
// deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
	string name="Janusz";
	string surname;
// zezwala na znak, tylko dodatnia liczba do  32767
	unsigned short age;
	
// deklaracja funkcji cz³onkowskiej (metoda)
	void showData(){
		cout << "Imiê" << endl;
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
	cout << "imiê i nazwisko:" << pracownik.name <<" "<< pracownik.surname << endl;
	cout << "wiek" << " " << pracownik.age;
	pracownik.showName();
	return 0;
}
