#include <iostream>

using namespace std;

int main()
{
    int a[]={43,2,3,4,5,6,8,21},contador=0;
    int n = sizeof(a)/sizeof(int);
    for (int i=0;i<=n-1;i++){
        if (contador<a[i]){
            contador=a[i];
        }
    }
    cout<<contador;
}
