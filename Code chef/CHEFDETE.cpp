#include <bits/stdc++.h>
#include<set>
using namespace std;

int main()
{

    int n;
    std::cin >> n;
    int report[n];
    for (int i = 0; i < n; i++)
    {
        cin >> report[i];
    }

    set<int> report_set;

    for (int i = 0; i < n; i++)
    {
        report_set.insert(report[i]);
    }

    for(int k=1;k<=n;k++){
	    if(report_set.count(k) == 0){
	        cout << k << " ";
	    }
	}

    return 0;
}