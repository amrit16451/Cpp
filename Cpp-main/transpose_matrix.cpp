#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the no of row and column: ";
    cin>>m;

    int arr[m][m];
    //Enter the value in array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //print the original matrix
    cout<<"Original matrix:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    //swap the value

    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        
    }
    //print the new matrix
    cout<<"New transverse matrix:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
    return 0;
}