#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int n;
	    std::cin >> n;
	    string s;
	    std::cin >> s;
	   
	   int count0=0; 
	   int count1=0;
	    
	    
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            count0++;
	        }else{
	            count1++;
	        }
	    }
	    if(count1>count0){
	        std::cout << 2*count0+1 << std::endl;
	    }
	    else if(count1==count0){
	       std::cout << count1+count0 << std::endl;
	    }
	    else if(count1<count0){
	        std::cout << 2*count1+1 << std::endl;
	    }
	}
	return 0;
}
