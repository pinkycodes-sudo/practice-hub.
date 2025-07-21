#include <iostream>

using namespace std;

bool isEven(int a)
{
    return a % 2 == 0;
}

int main()
{
    int value;

    cout << "Enter a number: ";
    cin >> value;

    if (isEven(value))
        cout << "The number is even" << endl;
    else
        cout << "The number is odd" << endl;

    return 0;
}
