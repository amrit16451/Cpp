#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		int sum = 0;
		for (int i = l; i <= r; i++)
		{
			int ans = 0;
			int curr_num = i;
			while (curr_num > 0)
			{
				int lastdigit = curr_num % 10;
				ans = ans * 10 + lastdigit;
				curr_num = curr_num / 10;
			}
			if (ans == i)
			{
				sum += i;
			}
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
