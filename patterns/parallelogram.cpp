#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int r=n;
    for(int i=1;i<=n;i++){
      for(int k=(n-i);k>=1;k--){
          cout<<" ";
      }
      for(int j=1;j<=n;j++){
          cout<<"*";
      }
     cout<<endl;
     r--;
    }
    return 0;
}
