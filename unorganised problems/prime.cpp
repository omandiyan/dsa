#include<iostream>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int a,b;
    cin>>a>>b;
    int i;
    for(int n=a;n<=b;n++){

        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
            

        }
        if(i==n){
             cout<<n<<endl;
        }
    }
    
    return 0;
}
