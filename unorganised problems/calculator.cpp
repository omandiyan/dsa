//simple calculator using switch case
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
    
    char a;
    cout<<"enter an operator"<<endl;
    cin>>a;
    
    switch(a){
        case '+':
          cout<<n1+n2<<endl;
          break;
        case '-':
             cout<<n1-n2<<endl;
             break;
        case '*':
             cout<<n1*n2<<endl;
             break;
        case '/':
             cout<<n1/n2<<endl;
             break;
        default:
        cout<<"I'm still learning"<<endl;
        break;







    }


return 0;
}