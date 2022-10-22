#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr=&a;

    cout<<*aptr<<endl;
    cout<<aptr<<endl;
    cout<<"new value"<<endl;
    *aptr=20;//update the value at the pointer's address
    cout<<aptr<<endl;//address of the pointer
    //aptr++;
    //cout<<aptr<<endl;//new address
    cout<<a<<endl;//value at the address
    cout<<*aptr<<endl;//value at the address
    *aptr=30;
    cout<<aptr<<endl;//new address
    cout<<a<<endl;//value at the address
    cout<<*aptr<<endl;//value at the address
    return 0;
}