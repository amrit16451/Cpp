#include<iostream>
using namespace std;

int main(){
    int i=0;
    int engmarks[]={12,19,18,9};
    int phymarks[]={22,29,38,19};

    int mathmarks[4];
    mathmarks[0]=10;
    mathmarks[1]=11;
    mathmarks[2]=18;
    mathmarks[3]=28;
    cout<<"These are math marks"<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[0]<<endl;
    //you can change the values
    mathmarks[2]=20;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    //cout<<"These are english marks"<<endl;
    //cout<<engmarks[0]<<endl;
    //cout<<engmarks[1]<<endl;
    //cout<<engmarks[2]<<endl;
    //cout<<engmarks[3]<<endl;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"The value of eng marks "<<i<<" is "<< engmarks[i]<<endl;
    }
    
    while (i<4)
    {
        /* code */
        cout<<"the value of math marks of "<<i<<"is"<< mathmarks[i]<<endl;
        i++;
    }
    
    //pointers and array

    int *p=phymarks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
//
    cout<<"The value of phymarks[0] is"<< *(p)<<endl;
    cout<<"The value of phymarks[1] is"<< *(p+1)<<endl;
    cout<<"The value of phymarks[2] is"<< *(p+2)<<endl;
    cout<<"The value of phymarks[3] is"<< *(p+3)<<endl;
    
    
    return 0;
}