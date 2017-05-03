#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> text {1,2,3,4,5,6,7,8,9};

    int value = 34;

    auto beg = text.begin();
    auto end = text.end();
    auto mid = text.begin() + (beg - end) / 2;

    while(mid != text.end()){
        if(value < *mid)
            end = mid;
        else if(value > *mid)
            beg = mid + 1;
        else
            cout << "found";

        mid = beg + (beg - end) / 2;
    }


    return 0;
}
