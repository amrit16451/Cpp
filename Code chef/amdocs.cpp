#include <bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * power(x, y - 1);
}
int main()
{
    int first_num;
    cin >> first_num;
    int second_num;
    cin >> second_num;

    if (first_num % 2 == 0)
    {
        for (int i = 1; i <= second_num; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << power(2, j) << " ";
            }
            cout << endl;
        }
    }
    else if (first_num % 2 != 0)
    {
        for (int i = 1; i <= second_num; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << power(3, j) << " ";
            }
            cout << endl;
        }
    }

    return 0;
}