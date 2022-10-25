#include <bits/stdc++.h>
using namespace std;

class student
{
    int roll;
    string name;
    string branch;

public:
    void base_info()
    {
        cout << "Enter roll number :";
        cin >> roll;
        cout << "Enter the name :";
        cin >> name;
        cout << "Enter the branch name :";
        cin >> branch;
    }

    void display_base_info()
    {
        cout << endl
             << roll << "\t" << name << "\t" << branch <<"\t";
    }
};

class full_info : private student
{
    int batch;
    string hostel_num;

public:
    void additional_info()
    {
        base_info();
        cout << "Enter the batch :";
        cin >> batch;
        cout << "Enter the hostel num: ";
        cin >> hostel_num;
    }
    void display_full_info()
    {
        display_base_info();
        cout << batch << "\t" << hostel_num << endl;
    }
};

int main()
{
    full_info s1;
    s1.additional_info();
    s1.display_full_info();
    return 0;
}