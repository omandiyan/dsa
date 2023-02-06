#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum= xorsum^arr[i];
    }
    return xorsum;
}

int main(int argc, char const *argv[])
{
    int arr[]={2,3,2,7,3,4,5,4,5};
    cout<<unique(arr,9)<<endl;
    return 0;
}
