#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"2 argument"<<endl;
    return a+b;
    }
int add(int a, int b, int c){
    cout<<"3 argument"<<endl;
    return a+b+c;
}
int main(){
    cout<<"The sum of 3,6 is"<<add(3,6)<<endl;
    cout<<"The sum of 3,6,9 is"<<add(3,6,9)<<endl;
    return 0;
}