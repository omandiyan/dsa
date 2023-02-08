#include <iostream>
#include <string.h>
using namespace std;

string removeAllOccurences(string s, string ab)
{
    while (s.length() != 0 && s.find(ab) < s.length())
    {
        s.erase(s.find(ab), ab.length());
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s;
    string ab;
    cout << "enter the string" << endl;
    getline(cin, s);
    cout << "enter part to be deleted " << endl;
    getline(cin, ab);
    string ans = removeAllOccurences(s, ab);
    cout << ans;
    return 0;
}
