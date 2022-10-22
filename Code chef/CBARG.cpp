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
		std::cin >> n;

		int mem[n];
		for (int i = 0; i < n; i++)
		{
			std::cin >> mem[i];
		}

		vector<int> memory;
		// for (int i = 0; i < n-1; i++) {
		//     if(mem[i]>sum){
		//         sum+=mem[i];
		//     }

		// }
		// int sum = 0;
		for (int i = 0; i < n; i++)
		{
			memory.push_back(mem[i]);
		}
		// sort(memory.begin(), memory.end(), greater<>());
		int ans = mem[0];
		for (int i = 1; i < memory.size(); i++)
		{
			int sum = (memory[i] - memory[i - 1]);
			if (sum > 0)
			{
				/* code */
				ans += sum;
			}
		}

		// cout << sum - max_element(memory)<< end;
		// int max = *max_element(memory.begin(), memory.end());
		// int sum = accumulate(memory.begin(), memory.end(), 0);

		cout << ans << endl;
	}
	return 0;
}