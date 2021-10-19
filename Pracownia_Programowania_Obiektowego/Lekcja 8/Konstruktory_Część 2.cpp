#include <iostream>
using namespace std;
struct Date
{
	int dd, mm, yyyy;
};
class Car
{
public:
	int id;
	string brand, model, color;
	unsigned short int power;
	float price;
	Date productionDate;

	void getData();
	Car();
	Car(int id);
	Car(string brand);
	Car(int id, string brand, string model);
	Car(int id, string brand, string model, string color);
	Car(int id, string brand, string model, string color, unsigned short int power, float price,
		Date productionDate);
};
Car::Car()
{

}
Car::Car(string pBrand) 
{
	brand = pBrand;
}
Car::Car(int pId)
{
	id = pId;
}
Car::Car(int pId, string pBrand, string pModel)
{
	id = pId;
	brand = pBrand;
	model = pModel;
}
Car::Car(int pId, string pBrand, string pModel, string pColor)
{
	id = pId;
	brand = pBrand;
	model = pModel;
	color = pColor;
}
Car::Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice,
	Date pProductionDate)
{
	id = pId;
	brand = pBrand;
	model = pModel;
	color = pColor;
	power = pPower;
	price = pPrice;
	productionDate = pProductionDate;
}
void Car::getData()
{
	cout << "\nId: " << id << "\nMarka: " << brand << "\nModel: " << model << "\nKolor: " << color
		<< "\nMoc: " << power << "km" << "\nCena: " << price << "z³‚" << "\nRok produkcji: "
		<< productionDate.yyyy << "r.\n";
}
int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "polish");
	Car fiat(8, "Fiat", "126p", "czerwony", 38, 20000, {19, 10, 2021});
	fiat.getData();

	Car honda;
	honda.getData();

	Car toyota(13, "Toyota", "Yaris");
	toyota.getData();

	Car toyota1(13, "Toyota", "Yaris", "Czerwony");
	toyota1.getData();

	Car *p_zsk;
	p_zsk = &fiat;
	cout<<"\nMarka: "<<p_zsk->brand;

	return 0;
}
