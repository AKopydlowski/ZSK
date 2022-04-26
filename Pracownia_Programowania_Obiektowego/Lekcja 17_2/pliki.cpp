//© 2022 Aleksander K.  All rights reserved.
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "polish");
	
	ofstream File;
	File.open("C:\\Users\\student\\Desktop\\17_2\\text.txt", ios::app);
	
	if(File.is_open()){
		cout<<("Enter the data to be written to the file: ");
		string text;
		//cin nie lapie spacji
//		cin>>text;
		//lapie spacje
		getline(cin, text);
		//przekierowane dane z text do pliku
		File<<text<<endl;
		File.close();
	}else{
		cout<<"ERROR 404"<<endl;
	}
	
	system("cls");
	 
	ifstream FileOpen("C:\\Users\\student\\Desktop\\17_2\\text.txt");
	if(FileOpen.is_open()){
		cout<<"File content"<<endl;
		string line;
		//wyswietlanie wszystkich lini z pliku
		while(getline(FileOpen, line)){
			cout<<line<<endl;
		}
		FileOpen.close();	
	}else{
		cout<<"ERROR 321"<<endl;	
	}
	
	return 0;
}
