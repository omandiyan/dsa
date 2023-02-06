#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 10;
    int ar[] = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3};
    int c = INT_MIN;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        c = max(c, ar[i]);
    }
    int arr[c + 1];
    for (int i = 0; i <= c; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        arr[ar[i]]++;
        // cout << arr[ar[i]] << endl;
    }
    for (int i = 0; i <= c; i++)
    {
        cout << arr[i] << endl;
    }
    for (int i = 0; i <= c; i++)
    {
        if (arr[i] > 1)
        {
            ans += (arr[i] / 2);
        }
    }
    cout << ans;
    return 0;
}
