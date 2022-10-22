#include <bits/stdc++.h>
using namespace std;

int main()
{ 
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int p1 = 0, p2 = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '1')
			{
				p1++;
			}
			else
			{
				p2++;
			}
		}
		if (p1 > p2)
		{
			cout << "WIN" << endl;
		}
		else
		{
			cout << "LOSE" << endl;
		}
	}
	return 0;
}