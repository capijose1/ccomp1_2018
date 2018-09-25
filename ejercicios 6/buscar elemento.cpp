#include <iostream>

using namespace std;

int contador(char palabra[]){
    int contador=0;
    for (int i=0;palabra[i]!= '\0' ;i++){
        contador++;
    }
    return contador;
}
int main()
{
    int c=0;
    char a[]= "holaaaaaa";
    char buscar[]= "l" ;

    for (int i=0;i<contador(a);i++){
        if (a[i]==buscar[0]){
            c++;
        }

    }
    cout<<c;
}
