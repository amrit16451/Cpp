#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string numbers[n];

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (numbers[0][k] == numbers[j][k])
                {
                    numbers[0][k] = '0';
                }
                else
                {
                    numbers[0][k] = '1';
                }
            }
        }

        int count = 0;
        for (int l = 0; l < 10; l++)
        {
            if (numbers[0][l] == '1')
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}