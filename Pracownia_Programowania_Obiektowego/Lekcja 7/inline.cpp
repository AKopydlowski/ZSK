//funckja cz�onkowska inline
#include <iostream>

using namespace std;

class Room{
	public:
		float length, width, height;
		
		inline float roomVolume(float lenght,float width,float height){
			return length*width*height;
		}
};



int main() {
	setlocale(LC_CTYPE, "polish");
	Room pokoj;
	pokoj.length=3.5;
	pokoj.width=4;
	cout<<"D�ugo�� pokoju: "<<pokoj.length<<"m\nSzeroko�� pokoju: "<<pokoj.width<<"m\nWysoko�� pokoju: "<<pokoj.height<<"\nObj�to�� pokoju: "<<pokoj.roomVolume(2.2,3.5,4)<<"m^3";
	
	return 0;

};
