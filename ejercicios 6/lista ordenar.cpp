#include <iostream>

using namespace std;
void invertir(int array[],int n){
    int num=0;
    for (int i=0;i<=(n/2-1);i++){
        num=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=num;
    }
}
int main()
{
    int c[]={8,2,3,4,5,6},num=0;
    int n = sizeof(c)/sizeof(int);//devuelve su tamaño en bytes que es el mismo tipo con el que trabaja int
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (c[j]>c[j+1]){
                num=c[j];
                c[j]=c[j+1];
                c[j+1]=num;
            }
        }
    }
    invertir(c,n);
    for (int i=0;i<n;i++){
        cout <<c[i]<<"  ,  ";
    }
}
