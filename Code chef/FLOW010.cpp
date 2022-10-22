#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    string classid;
	    cin>>classid;
	    
	    if(classid == "b" ||classid == "B"){
	        cout << "Battleship" << endl;
	    }
	    else if(classid =="c"||classid == "C" ){
	        cout << "Cruiser" << endl;
	    }
	    else if(classid=="d" ||classid == "D"){
	        std::cout << "Destroyer" << std::endl;
	    }
		else if(classid == "F" ||classid == "f"){
	        cout<<"Fritge"<<endl;
	    }
	}
	return 0;
}
