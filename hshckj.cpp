#include <iostream>
#include <string>

using namespace std;

int main() {
    long int i = 10000000;
    string s;
    stringstream y;
    y<<i;
    y>>s;
    cout<<s;

}
