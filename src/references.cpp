#include <iostream>

using namespace std;

int main() {
    int a=10;
    // r is a reference or alias of a
    int &r=a;
    // if you change r value, you are changing a value
    r=20;
    
    cout<<a<<endl;
    cout<<r<<endl;

    return 0;
}