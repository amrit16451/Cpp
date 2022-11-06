#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int num = 1; num <= 100; num++)
    {
        bool count = 0;
        for (int j = 2; j <= num / 2; j++)
        {
            if (num % j == 0)
            {
                count = 1;
            }
        }
        if (count == 0 && num != 1)
        {
            cout << num << " ";
        }
    }
    return 0;
}