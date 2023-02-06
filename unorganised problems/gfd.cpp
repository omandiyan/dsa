#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int n,a[100];
    int i=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n>0){
        a[i]=n%2;
        n/=2;
        i++;
    }
    cout<<"the binary number is "<<endl;

    for(i=i-1;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}
