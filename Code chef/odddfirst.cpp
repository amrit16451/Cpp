#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[6] = {1, 2, 3, 4, 5,7};

    vector<int> check;

    for (int i = 0; i < 6; i++)
    {
        if ((i+1) % 2 != 0) //if we count elemsts in num array from '1'
        {
            check.insert(check.begin(), num[i]);
        }
        else
        {
            check.insert(check.end(), num[i]);
        }
    }

    for (int j = 0; j < check.size(); j++)
    {
        /* code */cout<<check[j];
    }
    
    return 0;
}