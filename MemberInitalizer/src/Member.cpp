#include "Member.h"
#include <iostream>

using namespace std;


Member::Member(int a, int b): firstVal(a),secVal(b){
    //ctor
}

Member::~Member(){
    //dtor
}

void Member::print(){
    cout << "a = " << firstVal << " b = " << secVal << endl;
}
