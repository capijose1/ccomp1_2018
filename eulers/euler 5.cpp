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
        if (isDivisible){cout << endl << "El n�mero m�s peque�o divisible por todos los n�meros enteros entre 1 y 20 es:" << i << "." << endl << endl; break;}
    }
    return 0;
}
