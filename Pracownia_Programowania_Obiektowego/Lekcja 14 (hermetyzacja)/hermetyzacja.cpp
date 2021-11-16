//hermetyzacja i ukrywanie danych
#include <iostream>

using namespace std;

class Rectangle{
	public:
		double sideA{0};
		double sideB{0};
		
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		getSides();
};

	Rectangle::Rectangle(){
		
	};

	Rectangle::Rectangle(double pSideA, double pSideB){
		sideA=pSideA;
		sideB=pSideB;
}

	Rectangle::getSides(){
		cout<<"Bok A: "<<sideA<<"\nBok B: "<<sideB<<endl;
}

	void getSides(double a, double b){
		cout<<"Bok A: "<<a<<"\nBok B: "<<b<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	double width = 10;
	double height = 20;
	getSides(width, height);
	
	Rectangle p(5, 10);
	p.getSides();
	
	Rectangle p2(width, height);
	p2.getSides();
	return 0;
}
