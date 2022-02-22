#include <iostream>

using namespace std;

class Vehicle{
	public:
		void stop(){
			cout<<"STOP! zatrzymaj pojazd\n";
		}
		
};
class Car: public Vehicle{
	public:
		void stop(){
				cout<<"STOP! zatrzymaj samochód\n";
		}
};
class Bike: public Vehicle{
	public:
		void stop(){
				cout<<"STOP! zatrzymaj rower\n";
		}
};
class Rolls: public Vehicle{
	public:
		void stop(){
				cout<<"STOP! zatrzymaj rolki\n";
		}
};



int main() {
	setlocale(LC_CTYPE, "polish");
	
	//jawny
	Vehicle	*pojazd = new Vehicle();
	pojazd->stop();
	
	Rolls *rolki = new Rolls();
	rolki->stop();

	
	return 0;
}
