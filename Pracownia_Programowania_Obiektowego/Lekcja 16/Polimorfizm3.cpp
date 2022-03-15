#include <iostream>
using namespace std;

 class Animal{
 	public:
 		int age;
 		float weight;
 		virtual void Look(){
 			cout<<"Patrz!"<<endl;
		 }
		 virtual void Breath(){
		 	cout<<"Oddychaj!"<<endl;
		 }
};
  class Fish: public Animal{
  	public:
  		virtual void Breath(){
		 	cout<<"Ryba oddycha skrzelami :D"<<endl;
		 }
		virtual void Swim(){
		 	cout<<"Płyn"<<endl;
		 }
  		
};
  class Mammal: public Animal{
  	public:
  		virtual void Breath(){
		 	cout<<"ssak oddycha płucami "<<endl;
		 }
		virtual void Run(){
		 	cout<<"Biegnij"<<endl;
		 }
};
  class Bird: public Animal{
  	public:
  		virtual void Breath(){
		 	cout<<"ptak oddycha płucami "<<endl;
		 }
		virtual void Fly(){
		 	cout<<"Leć"<<endl;
		 }
};
 
int main(){
	setlocale(LC_CTYPE, "polish");
	
	//polimorfizm
	Mammal zwierze;
	Animal *wsk = &zwierze;
	wsk->Breath();
	
//	Fish zwierze1;
//	Animal *wsk1 = &zwierze1;
//	wsk1->Breath();
	
		
		
	return 0;
}
