#include<iostream>
using namespace std;

int sum(int a,int b){
    int c= a+b;
    return c;}

//this will  not swap value of a and b
int swap(int a,int b){   //temp a b
    int temp = a;       //4     4 5
    a=b;                //4     5 5
    b=temp;             //4     5 4
}
//this will swap value of a and b
//call by reference using pointers
int swapPointer(int* a,int* b){   //temp a b
    int temp = *a;       //4     4 5
    *a=*b;                //4     5 5
    *b=temp;             //4     5 4
}

//call by C++ reference Variables 
void swapReferenceVar(int &a,int &b){   //temp a b
    int temp = a;                //4     4 5
    a=b;                        //4     5 5
    b=temp;
    //return a;                     //4     5 4
}
int main(){
    int x=4;
    int y=5;
    cout<<"The sum of 4 and 5 is "<<sum(x,y)<<endl;
    //swap(x,y) //this will not swap a and b
    //swapPointer(&a,&b); this will swap a and b using pointers reference
    //swapPointer(&a,&b); this will swap a and b using reference variable
    
    swapReferenceVar(x,y); //=766;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}