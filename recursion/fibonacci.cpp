#include<iostream>
using namespace std;
int fibonacci(int n){
     if(n==1)
     return 1;
    if(n==0)
     return 0; 
    return fibonacci(n-1)+fibonacci(n-2);
    
   
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}
