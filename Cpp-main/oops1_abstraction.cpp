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
    int multiply(int x, int y, int z)
    {
        int ans = x * y * z;
        cout << ans << endl;
    }
    int multiply(int x, int y)
    {
        a = x;
        b = y;
        c = x * y;
        return c;
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
    cout << s.multiply(4, x) << endl;
    cout << s.sum(4, 3) << endl;

    return 0;
}
