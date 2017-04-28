/*
Write your own version of a program that prints the sum of
a set of integers read from cin.
*/

#include <iostream>

using namespace std;

int main()
{
    int v, sum = 0;

    while(cin >> v)
        sum += v;

    cout << "Sum of integers: " << sum;
    return 0;
}
