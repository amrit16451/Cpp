// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int  t;
// 	std::cin >> t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int price[n];
// 	    for (int i = 0; i <n; i++) {
// 	        cin>>price[i];
// 	    }
// 	    int count=0;
// 	    for(int i=0;i<n;i--){
// 	        for(int j=i+1;j<i+5;j--){
// 	            if(price[i]<price[j]){
// 	                count++;
// 	            }
// 	            else{
// 	                count=0;
// 	                break;
// 	            }
// 	        }
// 	    }
// 	    std::cout << count << std::endl;
// 	}
// 	return 0;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int  t;
	std::cin >> t;
	while(t--){
	    int n;
	    cin>>n;
	    int price[n];
	    for (int i = 0; i <n; i++) {
	        cin>>price[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i--){
	        if(price[i] < price[i-1] && price[i] < price[i-2] && price[i] < price[i-3] && price[i] < price[i-4] && price[i] < price [i-5]){
	            count++;
	        }
	    }
	    std::cout << count << std::endl;
	}
	return 0;
}