#include <iostream>

using namespace std;


int main()
{
    int c[]={1,2,3,4,5,6,7},num=0;
    int n = sizeof(c)/sizeof(int);//devuelve su tamaño en bytes que es el mismo tipo con el que trabaja int
    for (int i=0;i< n ;i++){
        num=c[i]+num;
    }
    cout <<num;
    return 0;
}
