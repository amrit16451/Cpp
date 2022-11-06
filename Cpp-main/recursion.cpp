#include <iostream>
using namespace std;

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * power(x, y - 1);
}

void intdec(int x)
{
    if (x == 0)
    {
        return; // The intdec function has a void return type,
        // so it doesn't have an expression in its return statement.
    }
    cout << x << endl;
    intdec(x - 1);
}

void intacc(int x)
{
    if (x == 0)
    {
        return;
    }
    intacc(x - 1);
    cout << x << endl;
}

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }

    return x * factorial(x - 1);
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return sum(n - 1) + n;
}

int main()
{
    int a, b;
    cout << "Enter the number:";
    cin >> a;
    // cout << "Enter the power";
    // cin >> b;

    // cout << "Power of the number:" << power(a, b);
    // cout << "\n";
    // cout << "Factorial of the number " << a << " is:" << factorial(a) << endl;
    while (a >= 0)
    {
        cout << fib(a) << " ";
        a--;
    }
    // intdec(a);
    // intacc(a);

    // cout<<"the sum of" <<a<< "natural number is "<<sum(a);
    return 0;
}