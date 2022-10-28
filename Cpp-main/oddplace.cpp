#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {3, 4, 5, 7, 8};

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}