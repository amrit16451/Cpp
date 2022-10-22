#include <bits/stdc++.h>
using namespace std;

bool isconsonant(char S)
{

    if (S != 'a' && S != 'e' && S != 'i' && S != 'o' && S != 'u')

        return true;

    else
        return false;
}

int main()
{
    // your code goes here
    int t;
    std::cin >> t;
    while (t--)
    {
        int x = 0;
        int N;
        cin >> N;
        string S;
        std::cin >> S;

        for (int i = 0; i < N; i++)
        {
            if (isconsonant(S[i]) && isconsonant(S[i + 1]) && isconsonant(S[i + 2]) && isconsonant(S[i + 3]))
            {
                int x = 1;
                break;
            }
        }
        if (x == 1)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}