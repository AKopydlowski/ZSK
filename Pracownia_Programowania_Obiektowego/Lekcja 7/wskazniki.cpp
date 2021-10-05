//wzaküniki
#include <iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		void getData();
		
};

void Worker::getData(){
	cout<<"Imie i Nazwisko: "<<name<<" "<<surname;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	
	//zmienna wskaünikowa
	Worker *p_kowalski;
	p_kowalski = &kowalski;
	cout<<"Adres obiektu kowalski: "<<p_kowalski<<endl;
	p_kowalski->name="Jan";
	p_kowalski->surname="Kowalski";
//	kowalski.getData();
	p_kowalski->getData();
	
	return 0;

};
