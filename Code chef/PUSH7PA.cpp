#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        /* code */
	        std::cin >> a[i];
	    }
	    sort(a,a+n,greater<int> ());
	    if(n==1){
	        std::cout << a[0] << std::endl;
	    }
	    
	    else{
	        int  height=0;
	        int  count=0;
	        
        for (int i = 0; i < n; i++) {
            if(a[i]==a[i+1]){
                count++;
            }
            else{
                if(height< count+a[i]){
                    height=a[i]+count;
                    count=0;
                }
            }
        }
        cout<<height<<endl;
	    }
	}
	return 0;
}
