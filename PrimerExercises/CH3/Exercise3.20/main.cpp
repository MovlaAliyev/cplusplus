/*
Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of
the first and last elements, followed by the sum of the second and second-tolast,
and so on.
*/
#include <iostream>
#include <vector>

using namespace std;

void sum_adjacent(vector<int> v){
    if(v.size() <= 2)
        return;

    for(decltype(v.size()) i = 0; i < (v.size() - 1); i++)
        cout << v[i] << " + " << v[i + 1] <<
                        " = " << v[i] + v[i+1]
                              << endl;
}

void sum_firstLast(vector<int> v){
    cout << v[0] << " + " << v[v.size()-1]
                 << " = " << v[0] + v[v.size()-1]
                 << endl;
}

void sum_symmetric(vector<int> v){
    int mid = v.size() / 2;

    for(decltype(v.size()) i = 0; i < v.size(); i++){
        cout << v[i] << " + " << v[(v.size() - 1) - i]
                     << " = " << v[i] + v[(v.size() - 1) - i]
                     << endl;
        if(i == (mid-1))
            return;
    }
}

int main(){
    int i;
    vector<int> v;

    while(cin >> i)
        v.push_back(i);


    sum_adjacent(v);
    sum_firstLast(v);
    sum_symmetric(v);

    return 0;
}
