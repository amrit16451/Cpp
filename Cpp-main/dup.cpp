#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> dup;

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        dup.insert(s[i]);
    }

    for (auto i = dup.begin(); i != dup.end(); i++)
    {
        /* code */ cout << *i;
    }

    return 0;
}