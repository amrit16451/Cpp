#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key whoes index you want :";
    cin >> key;
    cout << "Array elements are:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
    cout << linearsearch(arr, n, key) << endl;
    return 0;
}