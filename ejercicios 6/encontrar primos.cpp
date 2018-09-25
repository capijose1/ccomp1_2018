#include <iostream>
#include <math.h>

using namespace std;
bool isPrime(long n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n == 3)
        return true;
    int k = 3;
    int z = (int)(sqrt(n));
    if (n % 2 == 0)
        return false;
    while ((n%k)!= 0)
    {
        k += 2;
        if (k >= z)
            return true;
    }
    return false;
}


int main()
{
    int c[]={1,2,3,4,5,6,7,17},num=0;
    int n =  sizeof(c)/sizeof(int);//devuelve su tamaño en bytes que es el mismo tipo con el que trabaja int
    for (int i=0;i<n ;i++){
        if (true==isPrime(c[i])){
            num++;
            cout << " el numero primo es "<< c[i]<< endl;
        }

    }
    cout <<"hay: "<< num <<" primos en total";
    return 0;
}
