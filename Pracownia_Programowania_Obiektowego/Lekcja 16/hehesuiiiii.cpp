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
		 	cout<<"P�y�<<endl;
		 }
  		
};
  class Mamal: public Animal{
  	public:
  		virtual void Breath(){
		 	cout<<"ssak oddycha p�ucami "<<endl;
		 }
		virtual void Run(){
		 	cout<<"Biegnij"<<endl;
		 }
};
  class Bird: public Animal{
  	public:
  		virtual void Breath(){
		 	cout<<"ptak oddycha p�ucami "<<endl;
		 }
		virtual void Fly(){
		 	cout<<"Le�"<<endl;
		 }
};
 
int main(){
	setlocale(LC_CTYPE, "polish");
	
	Fish rybcia;
	
	
	
	
	return 0;
}
