#include<iostream>
using namespace std;

int main(){
    int height,width;
    cout<<"Enter the no of rows";
    cin>>height;

    width=(height*2)-1;
    {
    int n = width / 2, i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == n || j == (width - n)
                || (i == height / 2 && j > n
                    && j < (width - n)))
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
        n--;
    }
}
}