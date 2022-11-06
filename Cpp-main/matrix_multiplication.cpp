#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    // first array
    int arr1[n1][n2];
    int arr2[n2][n3];
    int ans[n1][n3];
    cout << "first array" << endl;

    for (int i = 0; i < n1; i++) // kon se row mai data jaega
    {
        for (int j = 0; j < n2; j++) // data jo us row mai jaega
        {
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    // 2nd array

    cout << "second array" << endl;
    for (int i = 0; i < n2; i++) // kon se row mai data jaega
    {
        for (int j = 0; j < n3; j++) // data jo us row mai jaega
        {
            cin >> arr2[i][j];
        }
    }
    cout << endl;

    // ans array

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "Ans array" << endl;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}