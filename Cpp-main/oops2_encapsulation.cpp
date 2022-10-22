#include <bits/stdc++.h>
using namespace std;

class oops2_encapsulation
{
private:
    int a;

public:
    void set(int x)
    {
        a = x;
    }

    int get()
    {
        return a;
    }
};

int main()
{
    oops2_encapsulation obj1;
    obj1.set(5);
    cout << obj1.get();
    return 0;
}
