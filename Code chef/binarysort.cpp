#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    // your code goes here
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0'){
            x++;
            }
        }
        std::cout << x << std::endl;
    }
    return 0;
}