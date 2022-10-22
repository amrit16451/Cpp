#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, i, count, sum = 0;
    for (int num = 1; num <= 100; num++)
    {
        /* code */
        count = 0;
        for (int i = 2; i <= sqrt(num); i++)
        {
            /* code */
            if (num % i == 0)
            {
                /* code */
                count = 1;
                break;
            }
        }
        if (count == 0 && num != 1)
        {
            /* code */
            sum += num;
        }
    }

    cout << sum;
    return 0;
}