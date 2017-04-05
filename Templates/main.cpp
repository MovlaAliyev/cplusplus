#include <iostream>
#include <string>
using namespace std;

template<typename T>

void print(T value){
    cout << "value: " << value << endl;
}


int main()
{
    int i    = 5;
    bool b   = true;
    double d = 5.5;

    string s("Hello World");

    print(i); // T int
    print(b); // T bool
    print(d); // T double
    print(s); // T string


    return 0;
}
