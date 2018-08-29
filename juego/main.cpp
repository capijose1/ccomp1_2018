#include <iostream>

using namespace std;

int main()
{
    /*
    hola
    */
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int t;
    int uno;
    int dos;
    int tres;
    int cuatro;
    int cinco;
    int nuevo;




    cout << "inserte primer numero ";
    cin >> a;
    cout << "inserte segundo numero ";
    cin >> b;
    cout << "inserte tercer numero ";
    cin >> c;
    if (a>b){
        if (a>c){
            cout << " el mayor es: "<< a;
            if (b>c){
                cout << " el menor es: "<< c;
            }
            else{
                cout << " el menor es: "<< b;
            }
        }
        else{
            cout << " el mayor es: "<< c;
            if (b>c){
                cout << " el menor es: "<< c;
            }
            else{
                cout << " el menor es: "<< b;
            }
        }
    }
    else if (b>c){
        cout << " el mayor es: "<< b;
        if (c>a){
            cout << " el menor es: "<< a;
        }
    }
    else {
        cout << " el mayor es: "<< c;
        cout << " el menor es :"<< a;
    }

     cout << " la suma de a + b + c es: "<< a+b+c <<endl << " el promedio es "<< (a+b+c)/3 <<endl << " la multiplicacion: "<< (a*b*c)<<endl;
    cout <<" inserte el numero del siguiente ejercicio";
    cin >> d;
    if ((d%2)>0){
        cout <<" el numero es impar";
    }
    else {
        cout <<" el numero es par";
    }
    cout <<endl <<" fin del programa dos" << endl;
    cout << " inserte el numero";
    cin >>e;
    cout << " inserte el numero";
    cin >> f;
    if (e%f){
        cout << e << " no es multiplo de :"<< f << endl;
    }
    else {
        cout << e << " es multiplo de :"<< f << endl;
    }
    cout <<endl <<" fin del programa tres " << endl;
    cout << " inicio programa tres " << endl;
    cout << "inserte numero de 5 cifras"<< endl;
    cin>>t;
    uno = t/10000;
    dos = (t-(uno*10000))/1000;
    tres= (t-(dos*1000+uno*10000))/100;
    cuatro =(t-(tres*100+uno*10000+dos*1000))/10;
    cinco = (t-(cuatro*10+tres*100+uno*10000+dos*1000));
    cout << uno <<"     "<<dos<<"      "<<tres <<"      "<<cuatro <<"       "<<cinco<<endl;
    nuevo=0;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;
    cout << nuevo <<"       "<< nuevo*nuevo <<"         "<< nuevo*nuevo*nuevo<<endl;
    nuevo= nuevo + 1;


    return 0;
}
