#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;

		if (n % 2 == 0)
		{
			cout << n << endl;
		}
		else
		{
			cout << n - 1 << endl;
		}
	}
	return 0;
}
