#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
	// your code goes here
	ll t;
	std::cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll coins[n];
		for (int i = 0; i < n; i++)
		{
			std::cin >> coins[i];
		}
		ld sum_before = accumulate(coins, coins + n, 0);
		ld avg_before = sum_before / n;

		vector<long long int> max_value;
		bool flag = 0;
		for (int j = 0; j < n; j++)
		{
			ld new_sum = accumulate(coins, coins + n, -(coins[j]));
			ld avg_after = new_sum / (n - 1);

			if (avg_after == avg_before)
			{
				max_value.push_back(coins[j]);
				flag = 1;
			}
		}

		if (flag == 1)
		{
			ll mark = max_value[0];
			for (int i = 0; i < n; i++)
			{
				if (coins[i] == mark)
				{
					cout << i + 1 << endl;
					break;
				}
			}
		}
		else if (flag == 0)
		{
			cout << "impossible" << endl;
		}
	}
	return 0;
}
