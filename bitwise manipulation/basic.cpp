#include<iostream>
using namespace std;

int getBit(int n,int pos){
    return ((n&(1<<pos))!=0);
   
}
int setBit(int n,int pos){
    return(n|(1<<pos));
}
int clearBit(int n,int pos){
    return (n&~(1<<pos));
}
int updateBit(int n,int pos,int value){
    return(clearBit(n,pos)|(value<<pos));
}
int main(int argc, char const *argv[])
{
   cout<<getBit(5,2)<<endl;
   cout<<setBit(5,1)<<endl;
   cout<<clearBit(5,2)<<endl;
   cout<<updateBit(5,1,1)<<endl;
    return 0;
}
