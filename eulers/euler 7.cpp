#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int a){
    if (a==2||a==3){
        return true;
    }
    if (a%2==0){
        return false;
    }

    bool prime=true;
    for (int b=2;b<sqrt(a);b++){
        if (a%b==0)
            prime=false;

    }
    if (prime==true)
        return true;
    else
        return false;
}

int main(){
    int contadori=0;
    long long int contador1=0;
    for (int c=2;contadori==0;c++){
        if (esPrimo(c)==true){
            contador1++;
            if (contador1==10001)
                {cout<<c;

            break;}
        }
    }
    return 0;}
