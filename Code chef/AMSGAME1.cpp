#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int nums[n];
		for (int i = 0; i < n; i++)
		{
			cin >> nums[i];
		}
		sort(nums, nums + n);
		for (int i = 0; i < INT_MAX; i++)
		{
			int app = count(nums, nums + n, nums[0]);
			if (app != n)
			{
				nums[n - 1] = nums[n - 1] - nums[0];
				sort(nums, nums + n);
			}
			else
			{
				cout << nums[0] << endl;
				break;
			}
		}
	}
	return 0;
}