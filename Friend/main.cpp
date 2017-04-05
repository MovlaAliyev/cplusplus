#include <iostream>

using namespace std;


class Test{
public:
    Test(){
        val = 0;
    }
private:
    int val;
    int valSec;

friend void testFunc(Test &t);

};

void testFunc(Test &t){
    t.val = 2;
    cout << t.val << endl;
}
int main(){
    Test t;
    testFunc(t);
    return 0;
}
