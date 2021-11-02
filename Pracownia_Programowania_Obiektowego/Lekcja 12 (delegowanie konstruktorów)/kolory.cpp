//delegowanie konstruktorów
#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
		string color;
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		
		void setColor(string pColor);
		void getData();
		

	
};

	Rectangle::Rectangle(){
		cout<<"konstruktor domyœlny"<<endl;
		setColor("red");
	}

	Rectangle::Rectangle(double pSideA, double pSideB){
		cout<<"konstruktor parametryczny"<<endl;
		sideA=pSideA;
		sideB=pSideB;
		setColor("red");
		
		
	}

void Rectangle::setColor(string pColor){
	color=pColor;
};
void Rectangle::getData(){
	cout<<"Bok A:"<<sideA<<"\nBok B: "<<sideB<<"\nKolor "<<color<<endl;
};



int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Rectangle p1;
	p1.getData();
	cout<<endl;
	
	Rectangle p2(2,4);
	p2.getData();
	p2.setColor("black");
	p2.getData();
	
	
	
	

	
	
	

	
	
	
	

	return 0;
}
