#include<iostream>
using namespace std;

int main(){
    int rows;
 
    cout<<"Enter rows :";
    cin>>rows;
    
    for (int i = 1; i <= rows; i++)
    {
        /* code */
        for (int j = 1; j <= i ; j++)
        {
            /* code */
            cout<<" ";
        }
        for (int j = rows; j > i-1; j--)
        {
            /* code */
            cout<<"*";
        }
        cout<<"\n";       
    }
    return 0;
}