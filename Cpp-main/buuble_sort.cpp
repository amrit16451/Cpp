#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of arrays: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int counter = 0; counter < n - 1; counter++)
    {
        for (int i = 0; i < n - 1 - counter; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}