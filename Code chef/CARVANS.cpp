#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		int speed[n];
		for (int i = 0; i < n; i++)
		{
			std::cin >> speed[i];
		}
		int max = speed[0];
		int count = 0;

		for (int i = 0; i < n - 1; i++)
		{
			if (speed[i + 1] > speed[i])
			{
				speed[i + 1] = speed[i];
			}
		}

		set<int> speed_set;
		for (int i = 0; i < n; i++)
		{
			speed_set.insert(speed[i]);
		}

		std::cout << speed_set.size() + count << std::endl;
	}
	return 0;
}
