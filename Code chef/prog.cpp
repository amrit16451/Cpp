#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // your code goes here
        int a, b, A1, B1, A2, B2;
        cin >> a >> b >> A1 >> B1 >> A2 >> B2;

        if ((a == A1 && b == B1) || (a == B1 && b == A1))
        {
            cout << "1\n";
        }

        else if ((a == A2 && b == B2) || (a == B2 && b == A2))
        {
            cout << "2\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}
