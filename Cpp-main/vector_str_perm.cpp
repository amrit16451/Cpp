#include <bits/stdc++.h>
using namespace std;

void display(vector<char> a)
{ // vector class implements dynamic array,means size automatically changes appending elements
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    // Obtaining length of array
    int n;
    cout << "enter the length of the array:";
    cin >> n;

    // Declaring a vector of integers

    // Taking input of array of integers
    vector<char> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
   

    // for (int counter = 0; counter < n - 1; counter++) // n-1 because after n-1 sort, last element will be automatically get sorted
    // {
    //     for (int i = 0; i < n - 1 - counter; i++)
    //     {
    //         if (a[i] > a[i + 1])
    //         {
    //             char temp = a[i];
    //             a[i] = a[i + 1];
    //             a[i + 1] = temp;
    //         }
    //     }
    // }
    // OR USE
    sort(a.begin(),a.end());
    do
    {
        // Display the current permutation
        display(a);
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}