#include <iostream>

using namespace std;

int main()
{
    char var;
    char var1;
    char respuesta;
    int c;
    int d;
    int e;
    int biciesto;


    cout << "ingrese un caracter ";
    cin >> var;
    cout << var << endl;
    d=static_cast<int>(var);
    if biciesto%100==0{
        if biciesto%400==0{

        }
    }
    if ((d>64 && d<91)){
        cout << "  es una letra mayuscula"<< endl;
        respuesta = d+32;
        cout << respuesta <<endl;
    }
    else if (d>96&&d<122){
        cout<<" es una letra minuscula"<<endl;
        respuesta=d-32;|
        cout <<respuesta<<endl;
    }
    else if (d==-92||d==-91){
           cout << "es un numero del alfabeto" << endl;

        }
    else if (d>47&&d<58){
        cin >> var1;
        e=static_cast<int>(var1);
        if (e>47&&e<58){
            cout << "son numeros " << endl;
            c= ((d+e)-96);
            cout << c << endl;
        }


    }
    else{
        cout << "no es un numero del alfabeto ni un numero " << endl;
    }
}
