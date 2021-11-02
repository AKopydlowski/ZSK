#include <iostream>

using namespace std;

class Worker{	
//deklaracja zmiennej cz3onkowskiej
public: 
//to deklaracja string name
		string name;
		string surname;
		string nationallity;
		unsigned short int birthYear;
		char gender;
		float height;
	
	//deklaracja metody (prototyp)
	
	void showPersonallity();
	void showSurname();
	void showAllData();
	
};

//definicja metody
void Worker::showSurname(){
	cout << "Nazwisko: " << surname << endl;
}

void Worker::showPersonallity(){
	cout << "Imie i Nazwisko " << name << " " << surname << endl;
}
void Worker::showAllData(){
	cout << "Narodowoœæ: " << nationallity << endl;
	cout << "Wiek: " << 2021-birthYear << endl;
	cout << "Wzrost: " << height << endl;
}

int main(int argc, char** argv) {
	//polskie znaki.
	setlocale(LC_CTYPE, "Polish");
	//klasy
	Worker pracownik;
	pracownik.name = "Marek";
	pracownik.surname = "Nowak";
	pracownik.gender = 'M';
	pracownik.nationallity = "Poland";
	pracownik.birthYear = 1995;
	pracownik.height = 190;
	pracownik.showSurname();
	pracownik.showPersonallity();
	pracownik.showAllData();
	
	return 0;
}
