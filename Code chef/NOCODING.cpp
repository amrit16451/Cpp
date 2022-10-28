#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		string inp;
		std::cin >> inp;
		char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
						 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

		int input_length = inp.size();

		int prog_length = 0;

		for (int j = 0; j < input_length; j++)
		{
			for (int i = 0; i < 26; i++)
			{
				if (alph[i] == inp[j])
				{
					prog_length += i;
				}
			}
		}
		cout << prog_length << endl;
	}
	return 0;
}
