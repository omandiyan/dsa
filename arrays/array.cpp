#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    /*int array[4]={10,20,30,40};
    array[0]=4;
    cout<<array[2]<<endl<<array[0];
    */
   int n;
   cin>>n;
   int array[n];
  
   for(int i=0;i<n;i++){
       cin>>array[i];
   }
   for(int i=0;i<n;i++){
       cout<<array[i]<<endl;
   }
   
   
    return 0;
}

