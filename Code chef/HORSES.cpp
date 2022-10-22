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

		int skill[n];
		for (int i = 0; i < n; i++)
		{
			std::cin >> skill[i];
		}
		sort(skill, skill + n);
		int diff = INT_MAX;

		for (int i = n - 1; i > 0; i--)
		{
			int difference = skill[i] - skill[i - 1];
			if (difference < diff)
			{
				diff = difference;
			}
			//cout<<difference<<" ";
		}
		std::cout << diff << std::endl;
	}
	return 0;
}
