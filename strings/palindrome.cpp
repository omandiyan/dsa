#include <iostream>
#include <vector>
using namespace std;

bool palindrome(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (str[s++] != str[e--])
        {
            return false;
        }
    }

    return true;
}
int main(int argc, char const *argv[])
{
    char str[20];
    cout << "enter the string to check palindrome" << endl;
    cin >> str;
    int n = strlen(str);
    bool ans = palindrome(str, n);
    if (ans == 0)
    {
        cout << "The given string " << str << " is not a palindrome" << endl;
    }
    else
    {
        cout << "The given string " << str << " is a palindrome" << endl;
    }

    return 0;
}
