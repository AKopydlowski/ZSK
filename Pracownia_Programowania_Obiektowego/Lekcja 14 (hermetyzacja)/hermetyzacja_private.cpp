//hermetyzacja i ukrywanie danych
//z clas¹ private
#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA{0};
		double sideB{0};
	public:	
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		
		//akcesory
		void setSideA(double pSideA);
		void setSideB(double pSideB);
		double getSideA();
		double getSideB();
};

	Rectangle::Rectangle(){
		
	};

	Rectangle::Rectangle(double pSideA, double pSideB){
		sideA=pSideA;
		sideB=pSideB;
	}

		void Rectangle::setSideA(double pSideA){
			sideA=pSideA;
		};
		
		void Rectangle::setSideB(double pSideB){
			sideB=pSideB;
		};
		
		double Rectangle::getSideA(){
			return sideA;
		};
		
		double Rectangle::getSideB(){
			return sideB;
		};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	double width = 10;
	double height = 20;
	
	Rectangle p1;
	cout<<p1.getSideA()<<endl;
	
	Rectangle p2;
	p2.setSideA(width);
	p2.setSideB(height);
	cout<<p1.getSideA()<<endl<<endl;
	cout<<p1.getSideA()<<endl<<endl;
	
	return 0;
}
