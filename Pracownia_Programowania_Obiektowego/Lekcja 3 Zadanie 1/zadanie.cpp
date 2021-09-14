#include <iostream>

using namespace std;

class Rectangle{
	public:
	float dlugosca;
	float dlugoscb;
	float pole();
	float obwod();
	void result();

};

float Rectangle::obwod(){
	return dlugosca*2+dlugoscb*2;
}
float Rectangle::pole(){
	return dlugosca*dlugoscb;
}
void Rectangle::result(){
	cout<< "d³ugoœæ a: " <<dlugosca<<endl <<"d³ugoœæ b: "<<dlugoscb<<endl<<"Obwód: "<<obwod()<<endl<<"Pole: "<<pole()<< endl;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	
	Rectangle rectangle;
	
	cout<<"Podaj D³ugoœæ a: ";
	cin >>rectangle.dlugosca;
	cout <<"Podaj D³ugoœæ b: ";
	cin >> rectangle.dlugoscb;
	cout<<endl;
	rectangle.result();
	return 0;

}
