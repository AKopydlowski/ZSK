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
	cout<< "d�ugo�� a: " <<dlugosca<<endl <<"d�ugo�� b: "<<dlugoscb<<endl<<"Obw�d: "<<obwod()<<endl<<"Pole: "<<pole()<< endl;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	
	Rectangle rectangle;
	
	cout<<"Podaj D�ugo�� a: ";
	cin >>rectangle.dlugosca;
	cout <<"Podaj D�ugo�� b: ";
	cin >> rectangle.dlugoscb;
	cout<<endl;
	rectangle.result();
	return 0;

}
