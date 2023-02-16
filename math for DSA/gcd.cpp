// this program is used to find the gcd(greatest common divider) of two
// numbers a and b;
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else if (b > a)
        {
            b -= a;
        }
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "enter 2 numbers to find the gcd " << endl;
    cin >> a, b;
    // a = 24, b = 48;
    cout << "gcd of the 2 numbers is " << gcd(a, b) << endl;
    return 0;
}
