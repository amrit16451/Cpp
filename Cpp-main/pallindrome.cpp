#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a;
    cin >> a;

    bool flag = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != a[a.size() - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "pallindrome" << endl;
    }
    else if (flag == 1)
    {
        cout << "not pallindrome" << endl;
    }

    return 0;
}