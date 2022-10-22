#include <bits/stdc++.h>
using namespace std;

int main()
{

	long long a;
	std::cin >> a;

	int j1 = 1;
	int j2 = 2;
	int j3 = 3;

	int sum = 0;

	for (int i = INT_MIN; i <= INT_MAX; i++)
	{
		if (sum == a)
		{
			cout << "yes" << endl;
			break;
		}
		sum += j1;
		if (sum == a)
		{
			cout << "yes" << endl;
			break;
		}
		sum += j2;
		if (sum == a)
		{
			cout << "yes" << endl;
			break;
		}
		sum += j3;
		if (sum == a)
		{
			cout << "yes" << endl;
			break;
		}

		if (sum > a)
		{
			cout << "no" << endl;
			break;
		}
	}

	return 0;
}
