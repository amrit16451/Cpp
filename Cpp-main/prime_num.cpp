#include<iostream>
using namespace std;

int main(){
    int n;
    bool is_prime = 0;//true
    
    cout<<"Enter a num:";
    cin>>n;

    for (int i = 2; i < n/2; i++){
        if (n%i==0){
            is_prime = 1;//false
            cout << n << " is not a prime number"<<endl;       
            break;
        }
    }
    if (is_prime==0){//true
        cout << n << " is a prime number"<<endl;
    }

    return 0;
}