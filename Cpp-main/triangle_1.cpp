#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int length = 2 * row - 1;

    for (int i = 1; i <= row; i++)
    // for (int i = row; i >= 1; i--) //for reverse triangle
    {
        for (int j = 1; j <= length; j++)
        {
            if (i + j > row && j - i < row) // for filled triangle or pyramid
            {
                cout << "*";
            }
            // if (i + j == row + 1 || j - i == row - 1 || i == row) // for hollow triangle
            // {
            //     cout << "*";
            // }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}