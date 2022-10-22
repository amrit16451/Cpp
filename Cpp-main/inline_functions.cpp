#include<iostream>
using namespace std;

inline int product(int a,int b){
    //not recomeneded to use static varialbles with inline functions
    //static int c=0; //this executes only once
    //c = c+1;    //Next time this function runs,the value of c will retain.
    return a*b;
}

float moneyReceived(int currentmoney, float factor=1.04){
    return currentmoney * factor;
}


int main(){
    
   //int a,b;
   //cout<<"Enter the value of a and b"<<endl;
   //cin>>a>>b;
   //cout<<"The product of a and b is "<<product(a,b)<<endl; 
   //cout<<"The product of a and b is "<<product(a,b)<<endl; 
    int money;
    cout<<"Enter the amount of money "<<endl;
    cin>>money;
    cout<<moneyReceived(money)<<endl;
    cout<<"for bank employess "<<moneyReceived(money,1.10)<<endl;
    return 0;
}