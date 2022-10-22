#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        vector<int> freq;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (num[j] > num[i])
                {
                    count++;
                }
            }

            freq.push_back(count);
        }

        for (int i = 0; i < freq.size(); i++)
        {
            cout << freq[i] << " ";
        }
    }

    return 0;
}