#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
	//prototyp konstruktor kopiujšcy
	Rectangle(const Rectangle&);
	
	void catchSides(double&, double&);
	void setSides(double sideA, double sideB);
	double area();
	double circuite();
	void getSides();
	
};

	Rectangle::Rectangle(){
		cout<<"konstruktor domyœlny"<<endl;
	}
	
	Rectangle::Rectangle(double pSideA, double pSideB){
		cout<<"konstruktor parametryczny"<<endl;
		sideA=pSideA;
		sideB=pSideB;
	}
	
	Rectangle::Rectangle(const Rectangle& model ){
		cout<<"konstruktor kopiuj¹cy"<<endl;
		sideA= model.sideA;
		sideB= model.sideB;
		
	}
	
	
	void Rectangle::catchSides(double &pSideA, double &pSideB){
		pSideA= sideA;
		pSideB= sideB;
		
		
	}
	
	void Rectangle::setSides(double pSideA, double pSideB){
		sideA= pSideA;
		sideB= pSideB;
	}
	
	double Rectangle::area(){
	return sideA * sideB;
	}
	
	double Rectangle::circuite(){
	return 2* sideA + 2 * sideB;
	}
	
	void Rectangle::getSides(){
		cout<<"bok a: "<<sideA<<"Bok b: "<<sideB<<endl;
	}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	//jawny
	double a, b;
	cout<<"Prostok¹t 1: "<<endl;
	Rectangle prostokat1(2, 4);
	prostokat1.getSides();
	cout<<"a: "<<a<<"b: "<<b<<endl;
	
	//nie jawny
	cout<<"Prostok¹t 2: "<<endl;
	Rectangle prostokat2= prostokat1;
	prostokat2.catchSides(a, b);
	prostokat2.getSides();
	cout<<"a: "<<a<<"b: "<<b<<endl;
	
	
	

	
	
	
	

	return 0;
}
