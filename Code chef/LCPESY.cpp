#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	std::cin >> t;
	while (t--)
	{
		string A;
		std::cin >> A;
		string B;
		std::cin >> B;

		vector<char> for_a;
		vector<char> for_b;
		// set<int>::iterator it, ls;

		int len1 = A.size();
		int len2 = B.size();
		for (int i = 0; i < len1; i++)
		{
			for_a.push_back(A[i]);
		}

		for (int i = 0; i < len2; i++)
		{
			for_b.push_back(B[i]);
		}
		sort(for_a.begin(), for_a.end());
		sort(for_b.begin(), for_b.end());

		vector<int> v(for_a.size() + for_b.size());
		vector<int>::iterator it, end;

		end = set_intersection(for_a.begin(),
							   for_a.end(),
							   for_b.begin(),
							   for_b.end(),
							   v.begin());

		int count = 0;
		for (it = v.begin(); it != end; it++)
		{
			count++;
		}

		cout << count << endl;
	}
	return 0;
}
