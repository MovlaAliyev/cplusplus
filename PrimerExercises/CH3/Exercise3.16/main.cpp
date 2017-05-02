/*
vector<int> v1;
(b) vector<int> v2(10);
(c) vector<int> v3(10, 42);
(d) vector<int> v4{10};
(e) vector<int> v5{10, 42};
(f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"};
*/

/*
Write a program to print the size and contents of the
vectors from exercise 3.13. Check whether your answers to that exercise
were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you
were wrong.
*/

#include <iostream>
#include <vector>
#include <string>


using namespace std;

void printIntVector(const vector<int> v){
    for(const auto elem: v)
        cout << elem << " ";
    cout << endl;
}

void printStringVector(const vector<string> v){
    for(const auto elem: v)
        cout << elem << " ";
    cout << endl;
}

int main(){

    vector<int>    v1;
    vector<int>    v2(10);
    vector<int>    v3(10, 42);
    vector<int>    v4{10};
    vector<int>    v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};


    printIntVector(v1);
    printIntVector(v2);
    printIntVector(v3);
    printIntVector(v4);
    printIntVector(v5);

    printStringVector(v6);
    printStringVector(v7);

    return 0;
}



