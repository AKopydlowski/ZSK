#include <iostream>
using namespace std;

//klasa abstrakcyjna
class Character{
	public:
		string name;
		virtual	void go()=0;
		virtual void stop()=0;	
};
class Human: public Character{
	public:
		void go(){
			cout<<"Cz³owiek idzie\n";
		}
		void stop(){
			cout<<"Cz³owiek zatrzymuje siê\n";
		}
		
		
};
class Bear: public Character{
	public:
		void go(){
				cout<<"Niedzielski idzie\n";
			}
			void stop(){
				cout<<"Niedzielski zatrzymuje siê\n";
			}
};
class superHero: public Character{
	public:
		void go(){
				cout<<"Morawiecki idzie\n";
			}
			void stop(){
				cout<<"Morawiecki zatrzymuje siê\n";
			}
};


int main() {
	setlocale(LC_CTYPE, "polish");
	
//	Character postac;
//	postac.go();

	Human czlowiek;
	czlowiek.go();
	czlowiek.stop();
	
	Bear niedzwiedz;
	niedzwiedz.go();
	niedzwiedz.stop();



	
	return 0;
}
