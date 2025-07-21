#include <iostream>

using namespace std;
bool isdelicious(int a)
{
    return a <= 5;

}
int main()
{
    int rate;
    cout << "Rate the food from 1 to 10" << endl;
    cin >> rate;

    if(isdelicious(rate))
    {
        cout << "The food is not that good" << endl;
    }

    else
    {
        cout << "The food is good" << endl;
    }
    return 0;
}
