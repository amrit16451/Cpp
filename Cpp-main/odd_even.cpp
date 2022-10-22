#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[10] = {7, 3, 4, 2, 9, 5, 6, 1, 8, 10};
    vector<int> re_arr;
    for (int i = 0; i < 10; i++)
    {

        if (num[i] % 2 == 0)
        {
            re_arr.insert(re_arr.begin(), num[i]);
        }

        else
        {
            re_arr.push_back(num[i]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << re_arr[i] << " ";
    }
    

    return 0;
}