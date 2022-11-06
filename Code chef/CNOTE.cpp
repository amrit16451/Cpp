#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int x, y, k, n;
		cin >> x >> y >> k >> n;
		vector<pair<int, int>> pageno_cost;
		// vector<int> costprice;

		for (int i = 0; i < n; i++)
		{
			int page;
			int cost;
			cin >> page;
			cin >> cost;
			pageno_cost.push_back(make_pair(cost, page));
		}
		int req_page = x - y;
		bool check = 0;
		for (int i = 0; i < n; i++)
		{
			if (pageno_cost[i].first <= k && pageno_cost[i].second >= req_page)
			{
				check = 1;
			}
		}

		if (check == 1)
		{
			std::cout << "LuckyChef" << std::endl;
		}
		else
		{
			std::cout << "UnluckyChef" << std::endl;
		}
	}
	return 0;
}