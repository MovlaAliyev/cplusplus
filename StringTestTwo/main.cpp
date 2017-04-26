#include <iostream>

using namespace std;

int main()
{
    string test("some, string!");
    decltype(test.size()) punct_cnt = 0;

    for(auto c: test)
        if(ispunct(c))
            ++punct_cnt;

    cout << punct_cnt
         << " punctuation characters in " << test << endl;


    return 0;
}
