#include <iostream>

using namespace std;


bool Palindrome(int producto){

	if(producto/100000 < 1){

		int uno = producto%10;
		int dos = (producto%100 - producto%10)/10;
		int tres = (producto%1000 - producto%100)/100;
		int cuatro = (producto%10000 - producto%1000)/1000;
		int cinco = (producto%100000 - producto%10000)/10000;

		if((uno == cinco) && (dos == cuatro)){
			return true;
		}else{
			return false;
		}

	}else{

		int uno = producto%10;
		int dos = (producto%100 - producto%10)/10;
		int tres = (producto%1000 - producto%100)/100;
		int cuatro = (producto%10000 - producto%1000)/1000;
		int cinco = (producto%100000 - producto%10000)/10000;
		int seis = (producto%1000000 - producto%100000)/100000;

		if((uno == seis) && (dos == cinco) && (tres == cuatro)){
			return true;
		}else{
			return false;
		}
	}
}


int main(){
    int a=0;

	for(int i = 100; i < 999; i++){
		for(int j = 100; j < 999; j++){

			int producto = i*j;
			if(Palindrome(producto)){
                if (a<producto){
                    a=producto;
                }

			}

		}
	}

cout << a << endl;
	return 0;
}
