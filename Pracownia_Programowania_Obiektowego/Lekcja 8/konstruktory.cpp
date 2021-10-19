//konstruktory 1 część
#include <iostream>

using namespace std;

struct Date{
	int dd,mm,yyyy;
};

class Car{
	
	public:
		
		int id;
		string brand, model, color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		
		void getData();
		
		Car(int, string, string, string, unsigned short int, float, Date);
		
		/*Car(){
			
			cout << "Konstruktor" << endl << endl;
			id = 9898392034898;
			brand = "Alfa Romeo";
			model = "Stelvio";
			color = "Black";
			power = 495;
			price = 265.000;
			dateOfProduction = {15,12,2018};
			
		}*/
	
};

Car::Car(int id, string brand, string model, string color, unsigned short int power, float price, Date dateOfProduction){
	
	
	Car::id = id;
	Car::brand = brand;
	Car::model = model;
	Car::color = color;
	Car::power = power;
	Car::price = price;
	Car::dateOfProduction = dateOfProduction;
	
}

void Car::getData(){
	
	cout << "Id: "<<id<<endl
		 << "Marka: "<<brand<<endl
		 << "Model: "<<model<<endl
		 << "Kolor: "<<color<<endl
		 << "Moc: " <<power<<"HP"<<endl
		 << "Cena: "<<price<<"zł"<<endl
		 << "Data produkcji: "<<dateOfProduction.dd<<"."<<dateOfProduction.mm <<"."<<dateOfProduction.yyyy<<"r." <<endl; 
	
}

int main() {
	
	setlocale(LC_CTYPE, "Polish");
	
	Car alfa(409320, "Alfa Romeo", "Stelvio", "Black", 495, 200000, {15,12,2018});
	
	alfa.getData();
	
	return 0;
}
