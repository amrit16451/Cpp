#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b, n;
		cin >> a >> b >> n;

		if (a==b || a%b==0)
		{
			cout << "-1" << endl;
		}
		else
		{
			for (int i = n; i <= INT_MAX; i++)
			{
				if (i % a == 0 && i % b != 0)
				{

					std::cout << i << std::endl;
					break;
				}
			}
		}
	}
	return 0;
}