#include <iostream>

using namespace std;

void check(int a)
{
    if(a%2 == 0)
    {
        cout << "The number is even" << endl;
    }

    else
    {
        cout << "The number is odd" << endl;
    }
}

int main()
{
   int value;

   cout << "Enter a number" << endl;
   cin >> value;
   check(value);

   return 0;
}
