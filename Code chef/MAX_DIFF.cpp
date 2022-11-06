#include <iostream>
using namespace std;
int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, s;
		cin >> n >> s;
		int max_diff = 0;
		for (int i = 0; i <= n; i++)
		{
			for (int j = i; j <= n; j++)
			{
				if (j + i == s && j - i > max_diff)
				{
					max_diff = j - i;
				}
			}
		}
		std::cout << max_diff << std::endl;
	}
	return 0;
}