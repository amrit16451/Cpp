#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows";
    cin>>row;

    for (int i = 1; i <= row; i++)
    {
        /* code */
        for (int j = 1; j <= row-i; j++)
        {
            /* code */
            cout<<"+";
        }
        for (int k = 1; k <= i; k++)
        {
            /* code */
            cout<<"*.";
        }
        
        cout<<"\n";
    }
    
    return 0;
}