#include <iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		Worker(){
			cout<<"Konstruktor Domyœlny Klasy Worker\n"<<endl;
		}
		Worker(string pName, string pSurname){
			name=pName;
			surname=pSurname;
			cout<<"Konstruktor Parametryczny Klasy Worker\n"<<endl;
		}
		string getData(){
			return "Imiê i Nazwisko: "+name+" "+surname+"\n";
		}
};
class Teacher : public Worker{
	public:
		string subjectInSchool;
		Teacher(){
			cout<<"Konstruktor Domyœlny Klasy Teacher\n"<<endl;
		}
		Teacher(string pName, string pSurname, string pSubjectInSchool){
			name=pName;
			surname=pSurname;
			subjectInSchool=pSubjectInSchool;
			cout<<"Konstruktor Parametryczny Klasy Teacher\n"<<endl;
		}
		//konstruktor z okresleniem klasy bazowej
		Teacher(string pName, string pSurname): Worker(pName, pSurname){
			
		}
		
		string getData(){
			return "Imiê i Nazwisko: "+name+" "+surname+", Przedmiot "+subjectInSchool+"\n\n";
		}
		
};

int main() {
	setlocale(LC_CTYPE, "polish");
	
//	Worker nauczyciel;
//	nauczyciel.name="Janusz";
//	nauczyciel.surname="Kowalski";
//	cout<<nauczyciel.getData();
	
//	Teacher pawlak;
//	pawlak.surname="Pawlak";
//	cout<<pawlak.getData();
	
	//sposób niejawny
//	Teacher nowak("Marek","Nowak","EDB");
//	cout<<nowak.getData();	
	
	//sposób niejawny
//	Teacher kowalski("Jakub","Kowalski");
	
	//sposób jawny
	Teacher kromka = Teacher("Maciej","Kromka");
	
	return 0;
}
