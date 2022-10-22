#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++)//kon se row mai data jaega
    {
        for (int j = 0; j < m; j++)//data jo us row mai jaega 
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int x;
    cout<<"Enter a value to find:";
    cin>>x;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==x)
            {
                cout<<i<<" "<<j<<" "<<endl;
                flag=true;
            }
            
        }
        
    }
    if (flag == true){
        cout<<"Element found";
    }
    else{
        cout<<"element not found";
    }
    
    return 0; 
}
 