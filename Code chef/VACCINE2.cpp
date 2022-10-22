#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, d;
		cin >> n >> d;
		int age[n];
		for (int i = 0; i < n; i++)
		{
			cin >> age[i];
		}
		int risk = 0;
		for (int i = 0; i < n; i++)
		{
			if (age[i] >= 80 || age[i] <= 9)
			{
				risk++;
			}
		}
		int not_risk = n - risk;
		int to_comp_risk = (risk % d) + (risk / d);
		int to_comp_not_risk = (not_risk % d) + (not_risk / d);

		int total_days = to_comp_risk + to_comp_not_risk;
		std::cout << total_days << std::endl;
	}
	return 0;
}
