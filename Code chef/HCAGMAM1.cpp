#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		/* code */
		int x, y;
		cin >> x >> y;
		string days;
		cin >> days;
		int to_pay = 0;
		int max_steak = 0;
		int count = 0;
		vector<int> max;

		for (int i = 0; i < 30; i++)
		{
			if (days[i] == '1')
			{
				to_pay += x;
				count++;
				max.push_back(count);
			}
			else if (days[i] == '0')
			{
				if (count > max_steak)
				{
					max.push_back(count);
				}

				count = 0;
			}
		}
		// int max_streak = *max_element(max.begin(), max.end());
		cout << to_pay + (y * (*max_element(max.begin(), max.end()))) << endl;
	}

	return 0;
}