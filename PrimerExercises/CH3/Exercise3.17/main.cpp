/*
Read a sequence of words from cin and store the values a
vector. After you’ve read all the words, process the vector and change
each word to uppercase. Print the transformed elements, eight words to a
line.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> word;
    string s;

    cout << "enter the word: " << endl;

    while(cin >> s)
        word.push_back(s);

    for(auto &a: word)
        for(auto &b: a)
            b = toupper(b);

    for(int i = 0; i < word.size(); i++){
         cout << word[i] << '\t';
         if((i+1)%8 == 0)
            cout << endl;
    }


    return 0;
}
