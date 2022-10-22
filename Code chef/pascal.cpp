#include <iostream>
#include <string.h>
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
    int r;
    cin >> r;

    for (int i = 0; i < r; i++)
    {
        cout <<  power(11, i) << endl;
    }

    return 0;
}