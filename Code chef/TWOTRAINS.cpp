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
		int p[n - 1];
		for (int i = 0; i < n - 1; i++)
		{
			cin >> p[i];
		}
		sort(p, p + n - 1);
		int time_diff_sum = 0;
		for (int i = n - 1 - 1; i > 0; i--)
		{
			int difference = 0;
			difference = p[i] - p[i - 1];
			time_diff_sum += difference;
		}
		int total_difference = time_diff_sum + p[0];
		
		int total_time = accumulate(p, p + n - 1, total_difference);
		cout << total_time << endl;
	}
	return 0;
}
