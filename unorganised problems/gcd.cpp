#include<iostream>
using namespace std;
//Euclid algorithm to find gcd
//basic logic is we keep decreasing the number 
//and after decreasing the number, the gcd of the 2 numbers doesn't change
//we can do this by subtracting a-b as well but % is more faster and smaller
//eg 24 and 42
//42%24=18
//24%18=6
//18%6=0
//therefore answer is 6
int gcd(int a, int b){

    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
        cout<<b<<endl;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;
    return 0;
}
