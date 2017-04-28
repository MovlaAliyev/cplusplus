/*
Write a program that uses a while to sum the numbers from
50 to 100.
*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int i   = 50;

    while(i <= 100){
        sum += i;
        i++;
    }

    cout << "Sum: " << sum << endl;
    return 0;
}
