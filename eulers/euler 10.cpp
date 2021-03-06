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
    int z = (int)(sqrt(n) + 1);
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
{   long long a=0,n;
    cin >>n ;
    for (long long i=1;i<n;i++){
        if (isPrime(i)==1){
            a=a+i;
        }
    }
    cout << a << endl;
    return 0;
}
