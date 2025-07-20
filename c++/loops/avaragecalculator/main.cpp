#include <iostream>

using namespace std;

int main()
{
    int marks;
    int total = 0;
    double average;


    for(int i = 1; i <= 7; i++)

   {

    cout << "Enter your marks for subject " << i << endl;
    cin >> marks;

    total = total + marks;

    }

    average = total/7.0;
    cout << "Your total mark is: " << total << endl;
    cout << "Your average is: " << average << endl;

    return 0;


}
