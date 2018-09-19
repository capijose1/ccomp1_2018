#include <iostream>

using namespace std;

int main()
{
    long long a=1;
    long long b=2;
    long long suma=0;
    long long n;
    long long u=0;
    cin>>n;
    while (b<=n){
        if(b%2==0){
            suma=suma+b;
        }
        u=a+b;
        a=b;
        b=u;
    }
    cout << suma ;

}
