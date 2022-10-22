#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    string s;
    cin >> s;
    int n; 
    
    cin >> n;
    while (n--)
    {
        string words;
        cin >> words;
        int count = 0;
        for (int i = 0; i < words.size(); i++)
        {
            for (int k = 0; k < s.size(); k++)
            {
                if (words[i] == s[k])
                {
                    count++;
                }
            }
        }
        if (count == words.length())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}