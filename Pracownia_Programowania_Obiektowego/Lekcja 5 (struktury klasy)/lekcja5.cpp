//struktury klasy
#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

class Worker{
	public:
		unsigned int id;
		string name{}, surname{};
		Date dateBirthday{};
		
		void showAllData();
		void setData(unsigned int id, string name,string surname,Date dateBirthday);
};

void Worker::showAllData(){
	cout<<"Dane pracownika:\nIdentyfikator pracownika: "
	<<id<<"\nImiê i Nazwisko: "<<name<<" "<<surname
	<<"\nData urodzenia: "<<dateBirthday.dd<<"."<<dateBirthday.mm<<"."<<dateBirthday.yyyy;
};

void Worker::setData(unsigned int id, string name,string surname,Date dateBirthday){
	Worker::id=id;
	Worker::name=name;
	Worker::surname=surname;
	Worker::dateBirthday=dateBirthday;
};

int main() {
	setlocale(LC_CTYPE, "polish");

	Worker pracownik;
	pracownik.setData(5,"Janusz","Bruh",{21, 06, 2005});
	pracownik.showAllData();

	return 0;

}

