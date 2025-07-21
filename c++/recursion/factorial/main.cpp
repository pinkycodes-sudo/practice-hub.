#include <iostream>

using namespace std;
int factorial(int number)
{
    if(number == 1)
    {
        return 1;
    }

    else

    {
        return  number* factorial(number - 1);
    }
}
int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;


    cout << "the factorial of " << a << " is: " << factorial(a) << endl;
    return 0;
}
