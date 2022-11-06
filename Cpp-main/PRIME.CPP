#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;

    for (int i = 1; i <= 100; i++)
    {
        bool check = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                check = 1;
            }
        }
        if (check == 0 && i != 1)
        {
            count++;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << count;
    return 0;
}