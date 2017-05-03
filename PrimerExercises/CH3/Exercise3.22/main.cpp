/*
Revise the loop that printed the first paragraph in text to
instead change the elements in text that correspond to the first paragraph
to all uppercase. After you’ve updated text, print its contents.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> txt;
    string line;

    while(getline(cin, line))
        txt.push_back(line);

    for(auto i = txt.begin(); i != txt.end(); ++i){
        for(auto &c: *i)
            c = toupper(c);
    }

    for (auto i = txt.begin(); i != txt.end()); ++i)
        cout << *i << " ";


    return 0;
}
