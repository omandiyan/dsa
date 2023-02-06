#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 1, 4, 5};
    int n = 5;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != (arr[i] - 1))
        {
            int temp = arr[arr[i] - 1];
            arr[arr[i] - 1] = arr[i];
            arr[i] = temp;
            c++;
            i--;
        }
    }

    cout << c;
    return 0;
}
