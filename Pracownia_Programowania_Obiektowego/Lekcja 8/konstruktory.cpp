
//Konstruktory
#include <iostream>

using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Car{
	public:
		int id;
		string brand, model, color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		
		void getData();
		void setData();
		
		//konstruktor
		// 1 sposób
		//Car(){
		//cout<<"Konstruktor";
		//	id=10, model="126p", color="czerwony";
		//	power=60;
		//	dateOfProduction={19, 10, 1995};
		//	price=20000;
		//}
		
		Car(int, string, unsigned short int, float, Date);
			
};
		Car::Car(int pid, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pdateOfProduction ){
			id=pid
			id=pid
			id=pid
			id=pid
			id=pid
			id=pid
			id=pid
		}
		
	void Car::setData(){
		cout<<"Podaj id: ";
		cin>>id;
		cout<<"Podaj Markê: ";
		cin>>brand;
		cout<<"Podaj Model: ";
		cin>>model;
		cout<<"Podaj Kolor: ";
		cin>>color;
		cout<<"Podaj Rocznik: ";
		cin>>dateOfProduction.yyyy;
		cout<<"Podaj Moc: ";
		cin>>power;
		cout<<"Podaj Cenê: ";
		cin>>price;
		cout<<endl;
		
	}

	void Car::getData(){
		cout<<"\nID: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nKolor: "<<color
		<<"\nRok Produkcji: "<<dateOfProduction.yyyy<<"r.\nMoc: "<<power<<"HP\nCena: "<<price<<"PLN"<<endl<<endl;
	}
	
	


int main() {
	setlocale(LC_CTYPE, "polish");
	
//  1 sposób
//	Car fiat;
	
	Car fiat(1, "x", 1, 1, {1, 2, 3});
	fiat.setData();
	fiat.getData();
	
	return 0;

};
