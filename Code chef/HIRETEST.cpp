#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x, y;
        cin >> x >> y;
        // char ans[n][m];

        for (int i = 0; i < n; i++)
        {
            int crct = 0;
            int p_crct = 0;
            string ans;
            cin >> ans;

            for (int j = 0; j < m; j++)
            {
                if (ans[j] == 'F')
                {
                    crct++;
                }
                if (ans[j] == 'P')
                {
                    p_crct++;
                }
            }

            if (crct >= x)
            {
                cout << "1";
            }
            else if (crct == (x - 1) && p_crct >= y)
            {
                cout << "0";
            }
            else
            {
                cout<<"0";
            }
            
        }
        cout<<endl;
    }
    return 0;
}