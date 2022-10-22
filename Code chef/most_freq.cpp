#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int test;
    cin >> test;

    int max_count = 0;
    int most_freq;

    for (int i = 0; i < test; i++)

    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[i + 1])
                {
                    count++;
                }
                if (count > max_count)
                {
                    cout<<"yes";
                    break;
                }
            }
        }
    }
    return 0;
}
