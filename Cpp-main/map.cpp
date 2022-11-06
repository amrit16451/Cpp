#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> marks;
    // marks.insert(pair<string, char>("amrit", 90));
    // marks.insert(pair<string, char>("amrit", 70));
    // marks.insert(pair<string, char>("neha", 60));
    // marks.insert(pair<string, char>("brownie", 100));
    // int total_sum = 0;
    

    for (auto itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << itr->first << '\t' << itr->second
             << '\n';
    }

    // for (auto itr : marks)
    // {
    //     total_sum += itr.second;
    // }

    //  cout << total_sum;

    return 0;
}