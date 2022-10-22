#include<iostream>
using namespace std;

//Function prototype

//type funnction-name(arguments):

int sum(int a, int b);
void g();

int main(){
    g();
    int num1,num2;
    cout<<"Enter first num"<<endl;
    cin>>num1;
    cout<<"Enter second num"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
    
}
int sum(int a,int b){
    //formal parmeters-a and b will be taking values from actual parameters num1 and num2
    int c =a+b;
    return c;

}

void g(){
    cout<<"Hello"<<endl;
}