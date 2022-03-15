#include <iostream>
using namespace std;

class c1{
	int a, b, c;
	virtual void f(){
		cout<<"funkcja"<<endl;
	}
};
class c2{
	int a, b, c;
	void f(){
		cout<<"funkcja"<<endl;
	}	
};
class c3{
	int a, b, c;
	virtual void f(){
		cout<<"funkcja 1"<<endl;
	}
	virtual void f2(){
		cout<<"funkcja 2"<<endl;
	}
	virtual void f3(){
		cout<<"funkcja 3"<<endl;
	}
};
 
int main(){
	setlocale(LC_CTYPE, "polish");
	
	//funkcje virtualne zajmuj¹ wiecej miejsca ni¿ zwyk³e
	c1 *wsk1 = new c1;
	cout<<sizeof(*wsk1)<<endl; //24	
	
	c2 *wsk2 = new c2;
	cout<<sizeof(*wsk2)<<endl; //12	
	
	c3 *wsk3 = new c3;
	cout<<sizeof(*wsk3)<<endl; //24
	
	//operator sizeof zwraca wynik w bajtach
	//sizeof typy
	cout<<"Typ int zajmuje: "<<sizeof(int)<<" Bajty"<<endl;
	cout<<"Typ char zajmuje: "<<sizeof(char)<<" Bajty"<<endl;
	cout<<"Typ float zajmuje: "<<sizeof(float)<<" Bajty"<<endl;
	cout<<"Typ double zajmuje: "<<sizeof(double)<<" Bajty"<<endl;
	cout<<"Typ string zajmuje: "<<sizeof(string)<<" Bajty"<<endl;
	cout<<"Typ bool zajmuje: "<<sizeof(bool)<<" Bajty"<<endl;
	
	//testowa zmienna
	string name ="Aleksander Agent";
	cout<<sizeof(name)<<endl;
		
	return 0;
}
