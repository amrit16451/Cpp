#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count >= 1)
        {
            cout << n << "->not prime" << endl;
        }
        else
        {
            cout << n << "->prime" << endl;
        }
        /* code */
    }

    return 0;
}