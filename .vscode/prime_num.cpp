#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int num = 1; num <= 100; ++num)
    {
        int count = 0;
        /* code */
        for (int j = 2; j <= sqrt(num); ++j)
        {
            /* code */
            if (num % j == 0)
            {
                /* code */
                count = 1;
            }
        }
        if (count == 0 && num!=1)
        {
            /* code */
            cout << num << " ";
        }
    }

    return 0;
}