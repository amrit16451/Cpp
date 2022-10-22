#include <bits/stdc++.h>
using namespace std;

int main()
{
    int order;
    cin >> order;
    int bottle[4] = {1, 5, 7, 10};

    sort(bottle, bottle + 4, greater<int>());

    int count = 0;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if (sum < order)
        {
            /* code */
            sum += bottle[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}