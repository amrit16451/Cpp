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
		cin >> n;

		string userid_votes[n];
		for (int i = 0; i < n + 1; i++)
		{
			getline(cin, userid_votes[i]);
		}

		vector<string> userid_votes_sort;

		for (int i = 0; i < n + 1; i++)
		{
			userid_votes_sort.insert(userid_votes_sort.begin(), userid_votes[i]);
		}

		sort(userid_votes_sort.begin(), userid_votes_sort.end());

		for (int i = 0; i < n; i++)
		{
			cout << userid_votes_sort[i] << " ";
		}
	}
	return 0;
}
