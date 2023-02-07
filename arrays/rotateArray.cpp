#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateArray(int k, vector<int> arr)
{
    vector<int> temp = arr;
    for (int i = 0; i < arr.size(); i++)
    {
        temp[((k + i) % arr.size())] = arr[i];
    }
    return temp;
}
void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(24);
    arr.push_back(21);
    arr.push_back(425);
    arr.push_back(22);
    arr.push_back(245);
    arr.push_back(34);
    arr.push_back(211);
    arr.push_back(97);
    arr.push_back(54);
    int k = 6;
    arr = rotateArray(k, arr);
    printArray(arr);
    return 0;
}
