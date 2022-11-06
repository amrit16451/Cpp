#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the num of elemets:";
    cin >> n;

    // Declaring a vector of integers

    // Taking input of array of integers
    // vector<int> a(n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int counter = 0; counter < n - 1; counter++) // n-1 because after n-1 sort, last element will be automatically get sorted
    {
        for (int i = 0; i < n - 1 - counter; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    // OR USE
    // sort(a.begin(),a.end());
    // sort(a,a+n); //if using array
    cout << "permutations :" << endl;
    int count = 0;
    do
    {
        // Display the current permutation
        count++;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    } while (next_permutation(a, a + n));
    cout << count;
    return 0;
}