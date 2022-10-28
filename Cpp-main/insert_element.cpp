#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int array[40], n, position, value;

    cout << "Enter the no. elements in array :";
    cin >> n;
    cout << "\n";
    cout << "Enter the elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the no to be inserted :";
    cin >> value;
    cout << "\n";
    cout << "Enter the position at which it is to be inserted :";
    cin >> position;

    for (int i = n - 1; i >= position - 1; i--) // n-1 because no of elements in array will be always n-1,as it starts from 0.
    {
        array[i + 1] = array[i];
    }
    array[position - 1] = value;
    cout << "The updated array is" << endl;
    for (int i = 0; i < n + 1; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}