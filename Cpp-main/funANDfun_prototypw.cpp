#include<iostream>
using namespace std;

//function prototype
//type function-name prototype
//it gives assurity that the folloing function is ahead
int sum(int a,int b);
int sum(int ,int );//this is also acceptable
void g(void);
void g();//also acceptable

int main(){
    int num1,num2;
    cout<<"Enter 1st no:";
    cin>>num1;
    cout<<"Enter 2nd no:";
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2);
    g();
    return 0;
}

int sum(int a,int b){
    //a and b are formal parameters
    int c= a+b;
    return c;
}
void g(){
    cout<<"\nsaaamp";
}