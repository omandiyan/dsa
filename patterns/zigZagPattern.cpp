#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(i%2==0){
                if((i+j)%2==0){
                    cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                if((i+j)%4==0){
                    cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
