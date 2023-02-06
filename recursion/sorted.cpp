#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1)
      return true;
    return (arr[0]<arr[1] && sorted(arr+1,n-1));
}

int main(int argc, char const *argv[])
{
    int arr[]={1,6,3,4,5};
    cout<<sorted(arr,5)<<endl;
    
    return 0;
}
