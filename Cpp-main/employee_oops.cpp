#include <bits/stdc++.h>
using namespace std;

class employee_basicinfo
{
private:
    int employee_id;
    string name;
    int age;
    string city;

public:
    void base_info()
    {
        cout << "Enter employee id:";
        cin >> employee_id;
        cout << "Name:";
        cin >> name;
        cout << "Age:";
        cin >> age;
        cout << "City:";
        cin >> city;
    }
    void diplay_basic_info()
    {
        cout << endl
             << employee_id << "\t" << name << "\t" << age << "\t" << city << "\t";
    }
};

class full_details : private employee_basicinfo
{
    string department;
    int salary;
    string manager;

public:
    void full_info()
    {
        base_info();
        cout << "Department's name:";
        cin >> department;
        cout << "Enter salary:";
        cin >> salary;
        cout << "Manager name:";
        cin >> manager;
    }
    void displaye_full_info()
    {
        diplay_basic_info();
        cout << department << "\t" << salary << "\t" << manager << endl;
    }
};

int main()
{
    full_details emp1;
    emp1.full_info();
    emp1.displaye_full_info();

    return 0;
}