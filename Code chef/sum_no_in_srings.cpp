
#include <bits\stdc++.h>
using namespace std;
int main()
{   
    string str;
    int sum=0;

    cout<<"C Program to sum all digits of a String";
    cout<<"Please enter a string : ";
    cin>>str;

    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (isdigit(str[i])) //remember isdigit func
        { 
            sum = sum + (str[i]-'0');
        }
    }
    cout<<sum;
    return 0;
}