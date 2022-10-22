#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        vector<char> numbers;
        set<string> out;
        for (int i = 0; i < a; i++)
        {
            numbers.push_back('0');
        }
        for (int j = 0; j < b; j++)
        {
            numbers.push_back('1');
        }
        do
        {
            // check(numbers);
            bool flag = 0;
            for (int i = 0; i < numbers.size(); i++)
            {
                for (int j = i; j <= i; j++)
                {
                    if (numbers[j] != numbers[numbers.size() - j - 1])
                    {
                        flag = 1;
                    }
                }
            }

            if (flag == 0)
            {
                out.insert("YES");
            }
            else if (flag == 1)
            {
                out.insert("NO");
            }

        } while (next_permutation(numbers.begin(), numbers.end()));

        if (std::find(out.begin(), out.end(), "YES") != out.end())
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}