#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    //cin >> name;
    getline(cin,name);

    int size = name.length();
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}