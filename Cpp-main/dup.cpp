#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> dup;

    for (int i = 0; i < s.size(); i++)
    {
        dup.insert(s[i]);
    }

    for (auto i = dup.begin(); i != dup.end(); i++)
    {
        cout << *i;
    }
    // for (auto itr : dup)
    // {
    //     cout<<itr;
    // }
    

    return 0;
}