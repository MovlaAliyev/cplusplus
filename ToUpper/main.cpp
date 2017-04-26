#include <iostream>
#include <string>

using namespace std;


string toUpperCase(string);
string toLowCase(string);
int    getASCIICode(char);

int main(){

    string lowToUp = "hELlo world";
    string upToLow = "ZAAA world";
    cout << toUpperCase(lowToUp) << endl;
    cout << toLowCase(upToLow)   << endl;

    return 0;
}

string toUpperCase(string value){
    decltype(value.size()) s_size = value.size();

    for(int i = 0; i < s_size; i++)
        if(value[i] >= 97 && value[i] <= 122)
            value[i]&=0xdf;
    return value;
}

string toLowCase(string value){
    decltype(value.size()) s_size = value.size();

    for(int i = 0; i < s_size; i++)
        if(value[i] >= 65 && value[i] <= 90)
            value[i]|=0x20;
    return value;
}

int getASCIICode(char c){
    return c;
}

