#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int n;
    cin>>n;
    int arr[n];
    int maxNum=INT_MIN;
    int minNum=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        maxNum=max(maxNum,arr[i]);
        minNum=min(minNum,arr[i]);

    }
    cout<<maxNum<<" "<<minNum;
    return 0;
}
