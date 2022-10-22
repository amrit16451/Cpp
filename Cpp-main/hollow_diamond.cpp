#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the no of rows";
    cin>>row;
    column=2*row-1;

    for (int i = 1; i <= row-1; i++)
    {
        for (int j = 1; j <= column; j++){
            if (i+j==row+1||j-i==row-1){
                cout<<"*";      
            }
            else{    
                cout<<" ";
            }       
        }
        cout<<endl;
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=column; j++)
        {
            if (i+j==2*j||i+j==2*row){
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