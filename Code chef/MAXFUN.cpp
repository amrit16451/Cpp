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
		int nums[n];

		for (int i = 0; i < n; i++)
		{
			cin >> nums[i];
		}
		sort(nums, nums + n, greater<int>());

		vector<int> sum_total;

		for (int j = 0; j < n - 1; j++)
		{
			int sum = 0;
			sum = nums[j] - nums[j + 1];
			sum_total.insert(sum_total.begin(), sum);
		}
		int add = accumulate(sum_total.begin(), sum_total.end(), 0);
		int result = add + (nums[0] - nums[n - 1]);
		cout << result << endl;
	}
	return 0;
}
