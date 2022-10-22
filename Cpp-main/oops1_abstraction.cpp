#include <bits/stdc++.h>
using namespace std;

class summation
{
private:
    int a, b, c;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        // cout << "The sum is: " << c << endl;
    }
    int get()
    {
        return c;
    }
    void multiply(int x, int y, int z)
    {
        a = x;
        b = y;
        c = x * y * z;
        cout << c << endl;
    }
    void multiply(int x, int y)
    {
        a = x;
        b = y;
        c = x * y;
        cout << c << endl;
    }
    int sum(int x, int y)
    {

        return x + y;
    }
};
int main()
{
    int x = 5;
    int z = 1;
    summation s;
    s.set(x, z);
    cout << s.get() << endl;
    s.multiply(x, z, 5);
    s.multiply(4, x);
    cout << s.sum(4, 3);

    return 0;
}
