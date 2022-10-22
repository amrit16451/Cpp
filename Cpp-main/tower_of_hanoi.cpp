#include<iostream>
using namespace std;


void towerofhanoi(int n,char source,char intermediate,char destination){
    if (n==0)
    {
        return;
    }

    towerofhanoi(n-1, source,destination,intermediate);

    cout<<"Move disk "<<n<<" from rod "<<source<<" to "<<destination<<endl;

    towerofhanoi(n-1,intermediate,source,destination);
    
}
int main(){
    int n=4;
    towerofhanoi(n,'A','B','C');
    return 0;
}