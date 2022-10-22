#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x=20;
    int y=40;
    
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}