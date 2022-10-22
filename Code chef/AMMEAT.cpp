#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int meat[n];
		for (int i = 0; i < n; i++)
		{
			cin >> meat[i];
		}
		sort(meat, meat + n);
		int sum = 0;
		int count = 0;
		for (int i = n - 1; i >= 0; i++)
		{
			while (sum <= m)
			{
				sum += meat[i];
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}