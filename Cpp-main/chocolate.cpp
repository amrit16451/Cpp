#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the amount";
    cin>>n;

    int chocolate=0;
    for (int i = 0; i < n; i++)
    {
        chocolate+=1;
        if (chocolate%3==0)
        {
            chocolate+=1;
        }
    }
    cout<<chocolate;
    return 0;
}