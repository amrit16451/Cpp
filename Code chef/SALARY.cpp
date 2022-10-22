#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int n;
	    cin>>n;
	    int salary[n];
	    for (int i = 0; i < n; i++){
	        std::cin >> salary[i];
	    }
	    sort(salary,salary+n);
	    int total=0;
	    for (int i = 0; i < n; i++) {
	        int diff = salary[i]-salary[0];
	        total+=diff;
	    }
	    std::cout << total << std::endl;
	}
	return 0;
}
