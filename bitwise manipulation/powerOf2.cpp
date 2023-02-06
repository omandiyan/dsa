#include<iostream>
using namespace std;

int isPowerofTwo(int n){
    return (n && !(n&(n-1)));
}

int main(int argc, char const *argv[])
{
    cout<<isPowerofTwo(16)<<endl;
    cout<<isPowerofTwo(9)<<endl;
    
    return 0;
}
