#include<iostream>
using namespace std;
int noOfOnes(int n){
    int c;
    while(n){
        n=n&(n-1);
        c++;
    }
    return c;
}
int main(int argc, char const *argv[])
{
    cout<<noOfOnes(19)<<endl;
    return 0;
}
