#include <iostream>

using namespace std;

int main()
{
    int suma=0,n,suma2=0;
    cin>>n;
    for (int i=1;i<=n;i++){
        suma = i+suma;
        suma2=i*i+suma2;
    }
    suma = suma*suma;
    cout << suma - suma2;
}
