#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		unordered_map<string, int> _map;
		for (int i = 0; i < n; ++i)
		{
			string name;
			cin >> name;
			char sign;
			cin >> sign;
			if (sign == '+')
			{
				_map[name] = 1; // key - value pair [name is key]  1 is value
			}
			else
			{
				_map[name] = -1;
			}
		}
		// for (auto itr = _map.begin(); itr != _map.end(); itr++)
		// {
		// 	cout << itr->first << '\t' << itr->second
		// 		 << '\n';
		// }
		int cnt = 0;
		for (auto itr : _map)
		{
			cnt += itr.second;
		}
		cout << cnt << endl;
	}
}