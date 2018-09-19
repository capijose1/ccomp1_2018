#include <iostream>

using namespace std;

int main() {
     unsigned long long numero, divisor = 2,a;

     cout<<"ingrese numero :";

     cin >> numero;
     a=numero;
     while ( numero >= divisor ){
          while ( numero % divisor == 0 ) {
              cout << divisor <<" x ";
              numero = numero / divisor;
          }
          divisor ++;
     }
   cout << "=" << a ;

}
