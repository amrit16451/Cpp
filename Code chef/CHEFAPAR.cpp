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

		int check[n];
		for (int i = 0; i < n; i++)
		{
			cin >> check[i];
		}

		int count_0 = count(check, check + n, 0);

		int count = 0;
		for (int i = 0; i < n - 1; i++)
		{

			if (check[i] < check[i + 1])
			{
				int temp = check[i];
				check[i] = check[i + 1];
				check[i + 1] = temp;
				count++;
			}
		}

		int total_remaining = count * (100);
		int total_fine = count_0 * (1000 + 100);
		cout << total_remaining + total_fine << endl;
	}

	return 0;
}