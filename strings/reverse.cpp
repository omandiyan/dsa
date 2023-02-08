#include <iostream>
#include <vector>
using namespace std;

void reverseSt(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(str[s++], str[e--]);
        cout << str[s] << endl;
    }
    cout << str << endl;
}
int main(int argc, char const *argv[])
{
    char str[20];
    cout << "enter the string to be reversed" << endl;
    cin >> str;
    int n = strlen(str);
    reverseSt(str, n);
    cout << str;
    return 0;
}
