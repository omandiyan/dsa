#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{ 
    int n,c;
    c=1;
    cin>>n;
    for(int j=1;j<=n;j++){
       
        for(int i=1;i<=j;i++)
        {
            cout<<" "<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}