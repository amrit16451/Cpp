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
		if (x % 2 != 0)
		{
			cout << "no" << endl;
		}
		else if (x % 2 == 0)
		{
			int convert_1to2 = 0;
			convert_1to2 = x / 2;
			int total_value = (convert_1to2 + y) * 2;

			if (total_value % 2 == 0)
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
		}
	}
	return 0;
}