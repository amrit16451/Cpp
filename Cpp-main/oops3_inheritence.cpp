#include <bits/stdc++.h>
using namespace std;

class Basic_info
{

    int id;
    char name[100];

public:
    void set_p()
    {
        cout << "Enter the Id:";
        cin >> id;
        fflush(stdin);
        cout << "Enter the Name:";
        cin.get(name, 100);
    }
    void display_p()
    {
        cout << id << endl;
        cout << name << endl;
    }
};
class Student : private Basic_info
{
    char course[50];
    int fee;

public:
    void set_s()
    {
        set_p();
        cout << "Enter the Course Name:";
        fflush(stdin);
        cin.getline(course, 50);
        cout << "Enter the Course Fee:";
        cin >> fee;
    }

    void display_s()
    {
        display_p();
        cout << course << endl;
        cout << fee << endl;
    }
};

int main()
{
    Student s1;
    s1.set_s();
    s1.display_s();
    return 0;
}