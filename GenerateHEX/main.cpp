#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string hexdigits = "0123456789ABCDEF";   //possible hex digits
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. Hit ENTER when finished: "
         <<  endl;

    string result; // will hold the resulting hexify'd string
    string::size_type n;

    while(cin >> n)
        if(n < hexdigits.size())
            result += hexdigits[n];

    cout << "Your hex number is: " << result;
    return 0;
}
