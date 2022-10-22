#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the no of row:";
    cin>>row;
    column=2*row-1;
    for (int i = 0; i <= row; i++){
        for (int j = 1;j <= column; j++){
            if (j+i==row||j-i==row||i==row-1){
               cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;    
    }
    return 0;
}