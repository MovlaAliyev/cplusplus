#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    /**
       vector<T> v1                 vector that holds objects of type T. default initialization;
                                    v1 is empty

       vector<T> v2(v1)             v2 has a copy each element in v1.

       vector<T> v2 = v1            v2 has a copy each element in v1.

       vector<T> v3(n,val)          v3 has n elements with value val.

       vector<T> v5{a,b,c..}        v5 has as many elements as there are initializers;elements
                                    are initialized by corresponding initializers.

       vector<T> v5 = {a,b,c..}    v5 has as many elements as there are initializers;elements
                                   are initialized by corresponding initializers.

       vector<int> v1(10);        v1 has ten elements with value 0

       vector<int> v2{10};        v2 has one element with value 10

       vector<int> v3(10, 1);     v3 has ten elements with value 1

       vector<int> v4{10, 1};     v4 has two elements with values 10 and 1

    */

    vector<int> v2;

    for(int i = 0; i < 100; i++){
        v2.push_back(i);
    }


    vector<int> v3 {1,2,3,4,5,6,7,8,9};

    for(auto &i: v3)
        i *= i;

    for(auto i: v3)
        cout << i;

    cout << endl;

    return 0;
}
