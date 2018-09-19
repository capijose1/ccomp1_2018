#include <iostream>

using namespace std;

bool isDivisible;

int main()
{
    for (long i = 2520; ; i += 20){
        isDivisible = true;
        for (int j = 20; j > 10; j--){
            if (!(i%j == 0)){isDivisible = false; break;}
        }
        if (isDivisible){cout << endl << "El número más pequeño divisible por todos los números enteros entre 1 y 20 es:" << i << "." << endl << endl; break;}
    }
    return 0;
}
