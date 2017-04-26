#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string s1 = "hello";
    string s3(10,'s');
    string s2 = (s1 + ",") + "world";

    string s4 = s1 + ", ";             //ok
    string s5 = "hello" + ", ";        //error
    string s6 = s1 + ", " + "world";   //ok
    string s7 = "hello" + ", " + s2;   // error
    string s8 = s4 + s6;
    cout << s3[0] << endl;

    /*while(cin >> word)
        cout << word;

    while (getline(cin,word)){
        if(!word.empty())
            cout << word << endl;
    }*/

    while (getline(cin,word)){
        if(word.size() > 2)
            cout << word << endl;
    }


    return 0;
}
