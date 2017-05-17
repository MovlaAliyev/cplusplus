/*
Using pointers, write a program to set the elements in an
array to zero.
*/
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int *p = &arr[5];

    for(int *i = arr; i != p ; ++i){
        *i = 0;
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
