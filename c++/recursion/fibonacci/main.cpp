#include <iostream>

using namespace std;
int fib(int number)
{
    if(number < 2)

    {
        return number;
    }

    else
    {
        return (fib(number-1)+ fib(number-2));
    }
}
int main()
{
    int value;
    cout << "enter a term number" << endl;
    cin >> value;
    cout << "fibonacci " << value << " is:" << fib(value) << endl;

    return 0;
}
