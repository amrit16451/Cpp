#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;

		int ign_files[m];
		for (int i = 0; i < m; i++)
		{
			cin >> ign_files[i];
		}
		int track_files[k];
		for (int j = 0; j < k; j++)
		{
			cin >> track_files[j];
		}
		int count_tracked = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < k; j++)
			{
				if (ign_files[i] == track_files[j])
				{
					count_tracked++;
					break;
				}
			}
		}
		set<int> together;
		for (int i = 0; i < m; i++)
		{
			together.insert(ign_files[i]);
		}
		for (int j = 0; j < k; j++)
		{
			together.insert(track_files[j]);
		}
		int cont_nd_track = 0;
		for (int i = 1; i <= n; i++)
		{
			for (auto itr = together.begin(); itr != together.end(); itr++)
			{
				if (*itr == i)
				{
					cont_nd_track++;
				}
			}
		}

		int count_and_untracked = n - cont_nd_track;

		cout << count_tracked << ' ' << count_and_untracked << endl;
	}
	return 0;
}