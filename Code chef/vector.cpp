#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> check;
    for (int i = 0; i < 20; i++)
    {
        check.push_back(i);
    }

    check.insert(check.begin()+1,2,5);
    for (int i = 0; i < 21; i++)
    {
        cout << check[i] << " ";
    }

    return 0;
}