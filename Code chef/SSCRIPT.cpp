#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		//string s;
		//std::cin >> s;

		vector<char> v(n);
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		
		int count = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == '*')
			{
				count++;
			}
			else if (v[i] != '*' && count < k)
			{
				count = 0;
			}
		}
		if (count >= k)
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "No" << std::endl;
		}
	}
	return 0;
}
