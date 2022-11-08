#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		double total_loss = 0;
		for (int i = 0; i < n; i++)
		{
			int init_price, recipe_num, discount;
			//double devide = 100;
			cin >> init_price >> recipe_num >> discount;
			double price_inc = init_price * (discount / 100.00);
			double new_price = init_price + price_inc;
			double discount_price = new_price * (discount / 100.00);
			double final_sellprice = new_price - discount_price;
			double total_prof = (final_sellprice - init_price) * recipe_num;
			total_loss += total_prof;
		}
		if (total_loss < 0)
		{
			cout << fixed << setprecision(7) << total_loss * (-1) << endl;
		}
		else
		{
			cout << total_loss << endl;
		}
	}
	return 0;
}