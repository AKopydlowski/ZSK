//konstruktor kopiuj¹cy 
#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double sideA, double sideB);
	//prototyp konstruktor kopiuj¹cy
	Rectangle(const Rectangle&);
};


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

	return 0;
}
