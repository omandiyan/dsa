#include<iostream>
using namespace std;
void inc(int *a){
    *a= *a +1;
}
int main(int argc, char const *argv[])
{
    int a=10;
    int *aptr;
    aptr= &a;
    
    cout<<a<<endl<<aptr<<endl<<*aptr<<endl;
    inc(&a);
    cout<<a<<endl<<aptr<<endl<<*aptr<<endl;
    return 0;
}
