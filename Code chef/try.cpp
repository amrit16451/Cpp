#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t, a, n, flag;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> a;
        ll int ans = a;
        n--;
        while (n--)
        {
            cin >> a;
            ans = __gcd(ans, a);
        }
        cout << ans << endl;
    }

    return 0;
}