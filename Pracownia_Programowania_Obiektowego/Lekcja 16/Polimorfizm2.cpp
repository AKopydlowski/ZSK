#include <iostream>
using namespace std;

//klasa abstrakcyjna
class Driver{
	public:
		string name;
		virtual	void go()=0;
		virtual void stop()=0;	
};
class Kubica: public Driver{
	public:
		void go(){
			cout<<"Kubica idzie\n";
		}
		void stop(){
			cout<<"Kubica zatrzymuje się\n";
		}
		
		
};
class Rainkonen: public Driver{
	public:
		void go(){
				cout<<"Rainkonen idzie\n";
			}
			void stop(){
				cout<<"Rainkonen zatrzymuje się\n";
			}
};
class Sainz: public Driver{
	public:
		void go(){
				cout<<"Sainz idzie\n";
			}
			void stop(){
				cout<<"Sainz zatrzymuje się\n";
			}
};


int main() {
	setlocale(LC_CTYPE, "polish");
	


	
	//wskaźniki
	//jawne 
	Driver *bolid = new Rainkonen();
	bolid->go();
	bolid->stop();
	
	//polimorfizm
	Sainz bohater;
	Driver *idol=&bohater;
	idol=&bohater;
	idol->go();
	
	idol=bolid;
	idol->go();



	
	return 0;
}
