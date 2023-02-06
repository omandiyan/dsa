#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

  long n, a, b, s;

  cout << "enter a number which you want to convert to binary" << endl;
  cin >> n;
  while (n > 0)
  {
    a = n / 2;
    b = n % 2;
    cout << b;
    s = s * 10 + b;

    n = a;
  }
  cout << endl;
  cout << s;

  return 0;
}
