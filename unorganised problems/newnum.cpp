#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=153;
    int nm=0;
    int a;
    while(n>0){
        a=n%10;
        nm+= pow(a,3);
        n/=10;
    }
    cout<<nm;
    return 0;
}
