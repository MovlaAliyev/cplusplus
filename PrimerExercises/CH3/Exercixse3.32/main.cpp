/*
Copy the array you defined in the previous exercise into
another array. Rewrite your program to use vectors.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[10];
    int arrTwo[10];

    for(int i = 0; i < 10; i++)  arr[i]    = i;

    for(int i = 0; i < 10; i++)  arrTwo[i] = arr[i];

    vector<int> v1;

    for(int i = 0; i < 10; i++)  v1.push_back(i);

    vector<int> v2(v1);

    return 0;
}
