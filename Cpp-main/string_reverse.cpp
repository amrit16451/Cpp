#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    int arrSize = s.length();

    for (int i = 0; i < (arrSize / 2); i++)
    {
        char temp = s[i];
        s[i] = s[arrSize - i - 1];
        s[arrSize - i - 1] = temp;
        // swap(s[i],s[arrSize-i-1]);
    }
    cout << s << endl;
    return 0;
}