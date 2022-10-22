#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}

int main(){
    //OOps-classes and objects

    //c++--> c with classes
    //class--> extension of structures(in c)
    //structures had limitation
        //--> members are public
        //--> No methods
    //classes--> structures + more
    //classes--> can have methods and properties
    //classes--> can make few members as private & few as public
    // structure in C++ are typedefed
    //you can declare objects right along with the class declreaton
        //class Employee{
            //Class defination
       //} harry,rohan,lovish; */
       //harry.salary  = 8 makes no sense if salary in pvt

       //nesting of member functions
    

    binary b;
    b.read();
    b.chk_bin();
    

    return 0;
}