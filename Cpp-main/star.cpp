#include<iostream>
using namespace std;

int main(){
    int height,width;
    cout<<"Enter the height of the star";
    cin>>height;
    width=2*height-1;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j <= height-i; j++)
        {
           cout<<" ";
        }
        
        for (int k = 0; k < 1; k++)
        {
            cout<<"*";
        }
       
        for (int l = 2; l <=2*i-2; l++)
        {
             cout<<" ";
        }
                 
        for (int k = 0; k < 1; k++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    } 
        //for (int n = i; i=height; n++)
        //{
        //    cout<<"*";
        //}
    
    
        
        
    return 0;
}