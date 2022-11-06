#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int len = 2 * num - 1;
    for (int i = num; i >= 1; i--)
    {
        int start = 1;
        for (int j = 1; j <= len; j++)
        {
            if (i + j > len + 1 && j - i < len - 1)
            {
                cout << start << " ";
                start++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}