#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {   
        int n;
        std::cin >> n;
        int arr[n];

        int c;
        cin >> c;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        if (arr[0]=0)
        {
            /* code */
            c--;
        }
        

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                c++;
            }
        }

        return 0;
    }
}