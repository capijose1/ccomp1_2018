#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int n;
    cin>>n;
    for (int i=1;i<n;i++){
        if (((i%3)==0)||((i%5)==0)){

            a=a+i;
        }

    }
    cout << a << "   ";
    return 0;
}
