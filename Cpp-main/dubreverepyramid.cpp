#include<iostream>
using namespace std;

int main(){
    
    int row,width;
    cout<<"Enter the no of row you want";
    cin>>row;
    width=(2*row)-1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= row-i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}