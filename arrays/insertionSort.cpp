#include <iostream>
#include <vector>

using namespace std;
vector<int> insertionSort(int n, vector<int> arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int v = 0;
        for (int j = i - 1; i >= 0; j--)
        {
            v = j + 1;
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[v] = temp;
    }
    return arr;
}

int main(int argc, char const *argv[])
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    int n = 5;
    arr = insertionSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
