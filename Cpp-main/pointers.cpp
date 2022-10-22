#include<iostream>
using namespace std;

int main(){
    //what is a pointer?--> datatype
    //holds the datatypes of other datatypes

    int a=3;
    int * b= &a;
     //&-->(address of) operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;

    // *-->(value at) Derefrence operator
    cout<<"The value at address b is"<<*b<<endl;
   
    //pointer to pointer
    int ** c =&b;
    cout<<"The value of b is"<<&b<<endl;
    cout<<"The value of b is"<<c<<endl;
    cout<<"The value at address c is"<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is"<<**c<<endl;
    return 0;  
}