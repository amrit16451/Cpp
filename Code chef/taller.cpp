#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int a, b;
    cout<<"enter the age of a"<<endl;
    cin>>a;
    cout<<"enter the age of b"<<endl;
    cin>>b;

    while(a != b)
    {
        std::cout << max('a', 'b') << "\n";
        break;
    }
    cout<<endl;
    return 0;
}