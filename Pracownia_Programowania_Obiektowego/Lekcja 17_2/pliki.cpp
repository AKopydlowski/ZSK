#include <iostream>
#include <fstream>
using namespace std;

int main(){
	setlocale(LC_ALL, "polish");
	
	ofstream File;
	File.open("C:\\Users\\student\\Desktop\\Lekcja 17_2\\pliki\\plik.txt");
	
	if(File.is_open()){
		cout<<("Podaj dane do zapisu w pliku: ", ios::app)<<endl;
		string text;
		//cin nie ³apie spacji
//		cin>>text;
		//³apie spacje
		getline(cin, text);
		//przekierowane dane z text do pliku
		File<<text<<endl;
		File.close();
	}else{
		cout<<"ERROR 404"<<endl;
	}
	
	return 0;
}
