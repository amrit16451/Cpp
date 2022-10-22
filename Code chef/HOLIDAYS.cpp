#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, w;
		cin >> n >> w;

		int mony[n];
		for (int i = 0; i < n; i++)
		{
			cin >> mony[i];
		}
		int sum = 0;
		int count = 0;
		sort(mony, mony + n, greater<int>());

		for (int i = 0; i < n; i++)
		{

			sum += mony[i];

			if (sum >= w)
			{
				count++;
				break;
			}
			else
			{
				count++;
			}
		}

		std::cout << n - count << std::endl;
	}
	return 0;
}