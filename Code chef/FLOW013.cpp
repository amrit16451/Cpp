#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int sum = a+b+c;
	    if(sum==180){
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
