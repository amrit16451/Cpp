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
		string inp1;
		cin >> inp1;

		for (int i = 0; i < n - 1; i++)
		{
			string input_com;
			cin >> input_com;
			for (int j = 0; j < 10; j++)
			{
				if (inp1[j] == input_com[j])
				{
					inp1[j] = 0;
				}
				else
				{
					inp1[j] = 1;
				}
			}
		}

		int count = 0;

		for (int i = 0; i < 10; i++)
		{
			if (inp1[i] == '1')
			{
				count++;
			}
		}
		std::cout << count << std::endl;
	}
	return 0;
}
