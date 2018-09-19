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
    while (n % k != 0)
    {
        k += 2;
        if (k >= z)
            return true;
    }
    return false;
}

long primeSumBelow(long x)
{
    long long total = 0;
    for (int i = 0; i < x; i++)
    {
        if (isPrime(i) == true)
            total += i;
        if (isPrime(i) == false)
            total += 0;
    }
    cout << "fd" << endl;
    return total;
}

int main()
{
    cout << primeSumBelow(20) << endl;
    cout << primeSumBelow(2000000) << endl;

    system("pause");
    return 0;
}
