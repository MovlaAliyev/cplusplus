/*
Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.
*/

#include <iostream>

using namespace std;

int main() {
    int from, to;

    cout << "Enter 2 number: ";
    cin >> from >> to;

    while(from <= to)
        cout << from++ << " ";
    
    return 0;
}
