#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter row:";
    cin>>row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j<=i-1; j++)
        {
            /* code */
            cout<<" ";
        }
        for (int k = 0; k<=row-i; k++)
        {
            /* code */
            cout<<"* ";
        }
        cout<<"\n";    
    }
    return 0;
}