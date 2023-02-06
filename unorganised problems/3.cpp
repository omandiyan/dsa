#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int savings;
    cin>>savings;
     if(savings>5000){
         cout<<"apples\n";
         } else{
             cout<<"oranges \n";
         }


    return 0;
}
