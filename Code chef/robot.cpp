#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;
        string S;
        cin >> S;

        int max = X, min = X;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'R')
            {
                X += 1;
                if (X > max)
                    max = X;
            }
            if (S[i] == 'L')
            {
                X -= 1;
                if (X < min)
                    min = X;
            }
        }
        std::cout << max - min + 1 << std::endl;
    }
    return 0;
}
