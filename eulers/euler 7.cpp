#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i=1,n,var=0,contador=0,raiz=0;
    cin >>n;
    while (1) {
        i++;
        if (contador>=n){
            break;
        }
        if ((i==2)||(i==3)||(i==5)||(i==7)||(i==11)){
            if (var<i){
                var=i;
            }
            contador++;
            continue;

        }
        if (((i%2)==0)||((i%3)==0)||((i%5)==0)||((i%7)==0)||((i%11)==0)){
            continue;
        }
        else {
                raiz=sqrt(i);
             if ((raiz%2)&&(raiz%3)&&(raiz%5)&&(raiz%7)&&(raiz%11)){
                if (var<i){
                var=i;
                contador++;
                continue;
            }

                }
                if (var<i){
                contador++;
                var=i ;
            }

        }

    }
    cout<<var;
}
