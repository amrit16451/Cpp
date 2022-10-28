#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int length = 2 * row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (i + j == row + 1 || j - i == row - 1 || (i == row / 2 && i + j > row && j - i < row))
            {
                cout << "*";
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