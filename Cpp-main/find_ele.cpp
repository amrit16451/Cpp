#include <bits/stdc++.h>
using namespace std;

int main()
{
    int elements[6] = {1, 3, 5, 6, 2, 7};
    int key;
    cin >> key;
    bool flag = 1;
    for (int i = 0; i < 6; i++)
    {
        if (key == elements[i])
        {
            cout << "element at position" << i << endl;
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "not present";
    }

    return 0;
}