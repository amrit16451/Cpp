#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum;
        sum = 0;
        cin >> n;
        int ar[11];
        for (int i = 0; i < 11; i++)
        {
            ar[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int  q,temp;
            cin >> q >> temp;
            if (temp > ar[q - 1])
                ar[q - 1] = temp;
        }
        for (int i = 0; i < 8; i++)
        {
            sum += ar[i];
        }
        cout << sum << endl;
    }

    return 0;
}