#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int j=1;j<=n;j++)
    {
        for (int i = 1; i <=j; i++)
        {
          cout<<"*";
        }
        int space=(2*n)- (2*j) ;
        for(int i=1;i<=space;i++){
           cout<<" ";
        }
        for (int i = 1; i<=j; i++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }
     for (int j=n;j>=1;j--)
    {
        for (int i = 1; i <=j; i++)
        {
          cout<<"*";
        }
        int space= 2*n - 2*j ;
        for(int i=1;i<=space;i++){
           cout<<" ";
        }
        for (int i = 1; i<=j; i++)
        {
            cout<<"*";
        }
        cout<<endl;
     }
    
    
    return 0;
}
