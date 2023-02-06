#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 2, 1, 4};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}