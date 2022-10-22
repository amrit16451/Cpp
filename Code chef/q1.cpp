#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int remainig(int withdraw,int balance){
    if (balance-withdraw-0.5>=0 && withdraw%5==0 )
    {
        int rem=(balance-withdraw)-0.5;
        return rem;
    }
    if (balance<withdraw)
    {
        return balance;
    }
    
    if (withdraw%5 != 0)
    {
        return balance;
    }
    
}
  
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.precision(2);

    int balance;
    int withdraw;

    cin>>withdraw;
    cin>>balance;

    cout<<remainig;
    return 0;
}