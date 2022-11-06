#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter the no of row:";
    cin >> row;
    column = 2 * row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (j + i == row + 1 || j - i == row - 1 || i == row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}