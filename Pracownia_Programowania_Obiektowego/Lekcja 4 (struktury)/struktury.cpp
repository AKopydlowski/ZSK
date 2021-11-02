//struktury
#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};
struct Student{
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};


int main() {
	setlocale(LC_CTYPE, "polish");
	Student kowalski{"janusz","bruh",100,{28,9,2021},{5, 4, 3, 2, 5,}};
	
	cout<<"Imiê i Nazwisko: "<<kowalski.name<<" "<<kowalski.surname
	<<"\nIndetyfikator: "<<kowalski.id<<"\ndata urodzenia: "<<kowalski.dateBirthday.dd
	<<"-"<<kowalski.dateBirthday.mm<<"-"<<kowalski.dateBirthday.yyyy<<"r.\n";
	
	for(unsigned int i; i<5; i++){
		cout<<i<<"ocena"<<kowalski.gradeInformatics[i]<<"\n"
		
	}
	
	

	return 0;

}

