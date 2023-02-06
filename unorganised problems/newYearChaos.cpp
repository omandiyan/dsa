#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int q[] = {1, 2, 5, 3, 7, 8, 6, 4};
    int n = 8;
    
    for (int i = 0; i < n; i++)
    {
        if (abs(q[i] - i) >= 4)
        {
            cout << "Too chaotic" << endl;
            
            return;
        }
    }
   
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (q[j] > q[j + 1])
            {
                int temp = q[j];
                q[j] = q[j + 1];
                q[j + 1] = temp;
                c++;
            }
        }
    }
    
    cout << c << endl;
}