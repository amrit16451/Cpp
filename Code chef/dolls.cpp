#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        int a[n];
        int count = 0;
        for (int i = 0; i < t; i++)
        {
            cin >> n;

            for (int j = 0; j < n; j++)
            {
                cin >> a[j];
            }
            for (int i = 0; i < n; i++)
            {
                count = 0;
                for (int j = 0; j < n; j++)
                {
                    if (a[i] == a[j])
                    {
                        count++;
                    }
                }
                if (count < 2)
                {
                    cout << a[i] << endl;
                }
            }
        }
    }

    return 0;
}
