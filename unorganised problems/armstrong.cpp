#include<iostream>
#include<math.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int a,c,ogNum;
    cin>>n;
    c=0,a=0;
    ogNum=n;
    while(n>0){
        a=n%10;
        n=n/10;
        c+=pow(a,3);
    }
    if(c==ogNum){
        cout<<"armstrong number"<<endl;
    }
    else cout<<"not armstrong";
    return 0;
}
