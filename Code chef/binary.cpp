#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    std::cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string S, R;
        cin >> S;
        cin >> R;

        sort(S.begin(), S.end());
        sort(R.begin(), R.end());
        bool flag = 1;

        for (int i = 0; i <= N; i++)
        {
            if (S[i] != R[i])
            {
                flag = 0;
                break;
            }
            else
            {
                continue;
                ;
            }
        }
        if (flag == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
