#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[40];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            s=0;
            for(int k=i;k<=j;k++){
               s+=a[k];
            }
           if(s>max)
           max=s; 
        }
    }
    cout<<max<<endl;
    return 0;
}
