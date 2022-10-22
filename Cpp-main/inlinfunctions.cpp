#include<iostream>
using namespace std;

inline int product(int x,int y){
    int c= x*y;
    return c;}
//don't use inline function when using recursion , static variable ,loop,switch
float moneyRecived(int currentmoney,float factor=1.04){
    //default arguments should be in extreme right
    return currentmoney*factor;
}

int main(){
    int a,b;
    //cout<<"Enter the value of a and b"<<endl;
    //cin>>a>>b;
    //cout<<"Product is :"<<product(a,b);

    int amt;
    cout<<"Enter the amt to deposit"<<endl;
    cin>>amt;
    cout<<"Total money received after 1year"<<moneyRecived(amt)<<endl;
    cout<<"Total money received after 1year if V.I.P"<<moneyRecived(amt,1.05)<<endl;
    return 0;
}