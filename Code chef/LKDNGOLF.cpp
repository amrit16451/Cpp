#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, x, k;
		cin >> n >> x >> k;
		vector<pair<int, int>> position;
		int from_front = 0;
		int from_back = n + 1;
		for (int i = 0; i <= n + 1; i++)
		{
			position.push_back(make_pair(from_front, from_back));
			from_front += k;
			from_back -= k;
		}
		bool check = 0;
		for (int i = 0; i <= n + 1; i++)
		{
			if (position[i].first == x || position[i].second == x)
			{
				check = 1;
			}
		}
		if (check == 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}