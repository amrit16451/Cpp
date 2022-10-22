#include <bits/stdc++.h>
using namespace std;

void lapin()
{
	string s;
	cin >> s;

	int n = s.size();

	string s1, s2;

	for (int i = 0; i < n/2; i++)
	{
		/* code */
		s1 += s[i];
		s2 += s[n - i - 1];
	}

	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if (s1 == s2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		lapin();
	}
	return 0;
}
