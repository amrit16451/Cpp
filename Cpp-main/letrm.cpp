#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int len = row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= len; j++)
        {
            if (j == 1 || j == row || (i <= 3 && i + j == 2) || (i == 2 && i + j == 4) || (i <= 3 && i + j == 6))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}