#include <iostream>
using namespace std;

int main()
{

	int t;
	std::cin >> t;
	while (t--)
	{
		string A;
		std::cin >> A;
		string B;
		std::cin >> B;

		int lenA = A.length();
		int lenB = B.length();
		int count = 0;
		bool flag = 0;
		for (int i = 0; i < lenA; i++)
		{
			for (int j = 0; j < lenB; j++)
			{
				if (A[i] == B[j])
				{
					flag = 1;
					break;
				}
			}
		}
		
		if (flag==1)
		{
			std::cout << "Yes" << std::endl;
		}
		else
		{
			std::cout << "No" << std::endl;
		}
	}
	return 0;
}