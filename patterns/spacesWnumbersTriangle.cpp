#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
        for(int k=(n-1);k>=j;k--){
            cout<<" ";
        }
        for (int i = 1; i <=j; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
