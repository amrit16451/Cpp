#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		string attend;
		std::cin >> attend;
		int count = 0;
		int max = 0;
		int pay = 0;
		int len = attend.size();
		for (int i = 0; i < len; i++)
		{
			if (attend[i] == '1')
			{
				pay += x;
				count++;
				if (count > max)
				{
					max = count;
				}
			}
			else if (attend[i] == '0')
			{

				count = 0;
			}
		}
		std::cout << pay + (y * max) << std::endl;
	}
	return 0;
}
