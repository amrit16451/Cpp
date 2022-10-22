#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int n;
	std::cin >> n;
	int nums[n];
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}
	int max_mod = 0;
	for (int i = 0; i < n; i++)
	{
		// for (int j = 0; j < n; j++)
		// {
			int mod = nums[i] % nums[j];
			if (mod > max_mod)
			{
				max_mod = mod;
			}
		//}
	}
	std::cout << max_mod << std::endl;
	return 0;
}
