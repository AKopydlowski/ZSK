//zmienne statyczne
#include <iostream>

using namespace std;

class School{
	public:
		//zmienne statyczne
		//pami�ta� o literze s_
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surname;
		
		//prototypy
		void getDate();
		void setNameSurname(string name, string surname);
		
		//pisanie funkcji
		static string s_getSchool();
		static void s_setSchool(string pSchool){
			
		}
};

	string School::s_school="ZSK";
	string School::s_jobPosition="Student";
	
	//ustawianie prototyp�w (definicje)
	void School::getDate(){
		cout<<"Imi� i Nazwisko: "<<name<<" "<<surname;
	};
	
	void School::setNameSurname(string name, string pSurname){
		School::name=name;
		surname=pSurname;
	};

	string School::s_getSchool(){
		return s_school;
	};


int main() {
	setlocale(LC_CTYPE, "polish");

	cout<<School::s_school;
	cout<<School::s_jobPosition;
	
	//obiekt instancji + zmiana pozycji (zmienia dla wszystkich)
	School kowal;
	kowal.setNameSurname("Jerzy","Ja�yna");
	kowal.getDate();
	School::s_jobPosition="wyk�adowca";
	cout<<"\nstanowisko: "<<School::s_jobPosition;
	kowal.s_jobPosition="dziekan";
	cout<<kowal.s_jobPosition;
	cout<<School::s_jobPosition;
	cout<<School::s_getSchool();
	School::s_setSchool("ZSX")
	cout<<School::s_getSchool();
	


	return 0;

};
