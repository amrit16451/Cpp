#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n;
    cin >> n >> k;
    // cin.ignore();
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    while (k--)
    {
        int t;
        string s;
        cin >> s;

        if (s != "CLOSEALL")
        {
            cin >> t;
            if (a[t - 1] == 0)
            {
                a[t - 1] = 1;
            }
            else if (a[t - 1] == 1)
            {
                a[t - 1] = 0;
            }
        }
        else if (s == "CLOSEALL")
        {
            for (int i = 0; i < n; i++)
            {
                a[i] = 0;
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}