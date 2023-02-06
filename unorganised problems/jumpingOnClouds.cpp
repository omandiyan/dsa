#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c = 0, k = 0, i = 0;
    int pos[n - 1];
    for (int j = 0; j < 7; j++)
    {
        if (arr[j] == 1)
        {
            pos[k] = j;
            k++;
        }
    }
    while (i < n - 1)
    {
        if (i + 2 == pos[c])
        {
            i++;
        }
        else
        {
            i += 2;
        }
        c++;
    }
    cout << c << endl;
}