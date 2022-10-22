#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int w;
		string s;
		cin >> w >> s;

		int extra_ = w % 7;

		string days[7] = {"mon", "tues", "wed", "thurs", "fri", "sat", "sun"};
		int standard[] = {4, 4, 4, 4, 4, 4, 4, 0, 0};
		int search;
		for (int i = 0; i < 7; i++)
		{
			if (days[i] == s)
			{
				search = i;
			}
		}
		for (int j = search; j < search + extra_; j++)
		{
			standard[j]++;
		}

		int remaining = count(begin(standard), end(standard), 1);

		if (remaining > 0)
		{
			for (int i = 0; i < remaining; i++)
			{
				standard[i]++;
			}
		}
		for (int i = 0; i < 7; i++)
		{
			cout << standard[i] << " ";
		}

		cout << endl;
	}
	return 0;
}