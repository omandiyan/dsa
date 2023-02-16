// this algorithm is used to calculate the number of prime numbers from 1 to a given number n
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 5000000;
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    cout << count << endl;
    return 0;
}
