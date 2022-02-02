#include <iostream>

using namespace std;

//dziedziczenie pojedyncze
class lekarz{
	//kod
};

class przechodnia : public lekarz {
	//kod
};

class pacjent : public przechodnia{
	//kod
};

//dziedziczenie wielokrotne
class Uczen{
	//kod
};

class Oceny{
	//kod
};

class Wynik: public Uczen, public Oceny{
	//kod
};

//dziedziczenie wielopoziomowe

class Car{
	//kod
};
class Brand: public Car{
	//kod
};

class BMW: public brand{
	//kod
};

//dziedziczenie hierarchiczne
class :Lotnisko{
	//kod
};

class Obsluga : public Lotnisko{
	//kod
};

class Pilot : public Lotnisko{
	//kod
};

class Turysta : public Lotnisko{
	//kod
};

//dziedziczenie mieszane
class Mecz{
	//kod
};

class Sport{
	//kod
};
class Oceny{
	//kod
};

class Wynik : public Sport, public Oceny{
	//kod
};

int main(){
	//kod
	//kod
	//kod

	return 0;	
}
