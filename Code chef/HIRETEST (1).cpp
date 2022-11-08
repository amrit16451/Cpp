#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int x, y;
		cin >> x >> y;
		vector<pair<int, string>> studentno_ans;
		for (int i = 0; i < n; i++)
		{

			string ans;
			cin >> ans;
			studentno_ans.push_back(make_pair(i, ans));
		}
		for (int i = 0; i < n; i++)
		{
			int crct = 0;
			int p_crct = 0;
			for (int j = 0; j < m; j++)
			{
				if (studentno_ans[i].second[j] == 'F')
				{
					crct++;
				}
				else if (studentno_ans[i].second[j] == 'P')
				{
					p_crct++;
				}
			}
			if (crct >= x)
			{
				cout << "1";
			}
			else if (crct == (x - 1) && p_crct >= y)
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
		cout << endl;
	}
	return 0;
}