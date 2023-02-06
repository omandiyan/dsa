#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int queries[3][3] = {{1, 2, 100}, {2, 5, 100}, {3, 4, 100}};
    long arr[6];
    long maxx = INT_MIN;
    for (int i = 0; i <= 6; i++)
    {
        arr[i] = 0;
    }
    int i = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            arr[j] = arr[j] + queries[i][2];
        }
    }

    for (int i = 1; i <= 6; i++)
    {
        cout << arr[i] << endl;
        maxx = max(maxx, arr[i]);
    }
    cout << maxx;
    return 0;
}
