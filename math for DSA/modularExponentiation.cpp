// this program is without a driver code with only a function
// The problem is given x,n,m find (x^n)%m but using time complexity of log(n)
#include <bits/stdc++.h>
#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m)
{
    int res = 1;

    while (n > 0)
    {

        if (n & 1)
        {
            // odd
            res = (1ll * (res) * (x) % m) % m;
        }
        n = n >> 1;
        x = (1ll * (x) % m * (x) % m) % m;
    }
    return res;
}