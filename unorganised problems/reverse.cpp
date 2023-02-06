#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a,b,rev;
    cin>>n;
    rev=0;
    while(n>0){
        a=n/10;
        b=n%10;
        rev=(rev*10) +b;
        n=a;
    }
     cout<<rev;
   
    return 0;
}


