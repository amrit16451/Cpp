#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of row:";
    cin>>row;

        for (int i = 1; i <= row; i++)
        {        
            for (int j = 1; j <= row-i; j++){
                cout<<" ";
            }
            for (int k = 1; k <=i; k++){
            cout<<"* ";
            }
            cout<<"\n";
        }
        for (int i = 1; i <= row-1; i++)
        {
            for (int j = 1; j <= i-1; j++){
                cout<<" ";
            }
            for (int k = 0; k <= (row-1)-i; k++){
                cout<<" *";
            }
            cout<<"\n";            
        }
        return 0;     
}