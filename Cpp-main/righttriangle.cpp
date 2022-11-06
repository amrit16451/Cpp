#include <bits/stdc++.h>
using namespace std;

int main()
{

    int height;
    cin >> height;

    // for (int i = 1; i <= height; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= height; i++) //for hollow right triangle
    {
        for (int j = 1; j <= height; j++)
        {
            if (j - i == 0 || i == height || j == 1)
            {
                /* code */
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