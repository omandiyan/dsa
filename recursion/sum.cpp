#include<iostream>
using namespace std;
int sum(int n){
    if(n!=0)
    return n+(sum(n-1));
    return 0;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}
