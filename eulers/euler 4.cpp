#include <iostream>
#include <math.h>

using namespace std;

int palindrom(int num);

int main()
{
    auto n1 = 999u;
    auto n2 = 999u;
    unsigned int n = 0u;

    unsigned int largest = 0;

    for (; n1>=100; n2--)
    {
        if (n2 < 100)
        {
            n1--;
            n2 = 999;
            continue;
        }

        if (palindrom(n1*n2) == n1*n2)
        {
            cout << "n1 << " << n1 << " n2 " << n2 << endl;
            cout << n1*n2;

            if (largest < n1*n2)
                largest = n1*n2;
        }
    }

    cout << "Largest" << largest << endl;

    return 0;
}

int palindrom(int num)
{
    int new_num = 0;
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;
        new_num = new_num*10 + digit;
        num /= 10;
    }

    return new_num;
}
