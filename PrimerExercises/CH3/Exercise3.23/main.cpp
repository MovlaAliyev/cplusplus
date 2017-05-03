/*
Write a program to create a vector with ten int elements.
Using an iterator, assign each element a value that is twice its current value.
Test your program by printing the vector.
*/

#include <iostream>
#include <vector>

using namespace std;

void operation(vector<int>);

int main() {
    vector<int> elem{1,2,3,4,5,6,7,8,9,10};

    operation(elem);

    return 0;
}

void operation(vector<int> elem){
    for(auto i = elem.begin(); i != elem.end();++i)
        *i *= 2;

    for(const auto i: elem)
        cout << i << " ";
}
