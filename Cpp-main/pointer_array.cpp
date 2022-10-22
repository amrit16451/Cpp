#include<iostream>
using namespace std;

int main(){
    
    int arr[]={10,20,30};
    //cout<<*arr<<endl;

    int *ptr=arr;//arr stores the address of zeroest element of array 
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<endl;
        cout<<(arr+i)<<endl;
       // ptr++;
    }
    *(arr+1)=50;
    cout<<arr[1]<<endl;
    cout<<(arr+1)<<endl;
    return 0;
} 