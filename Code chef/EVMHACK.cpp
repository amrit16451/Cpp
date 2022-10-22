#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{

		int data[6];
		for (int i = 0; i < 6; i++)
		{
			cin >> data[i];
		}

		vector<int> vote_diff;
		for (int i = 0; i < 6; i++)
		{
			vote_diff.push_back(data[i] - data[i + 3]);
		}
		int max_diff = *max_element(vote_diff.begin(), vote_diff.end());

		float avg_votes = (data[3] + data[4] + data[5]) / 2;

		int max_votes = max_diff + data[0] + data[1] + data[2];

		if (max_votes > avg_votes)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
