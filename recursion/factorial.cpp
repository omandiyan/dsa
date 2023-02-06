#include<iostream>
using namespace std;
int factorial(int n){
    if(n!=0)
    return n*(factorial(n-1));
    return 1;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
