#include<iostream>
#include<stdlib.h>

using namespace std;

int main () {
    int a = 10;
    int *p;
    p = &a;
    // Value
    cout << a << endl;
    // Address
    cout << &a << endl;
    // Pointer
    cout << p << endl;
    // Dereferencing
    cout << *p << endl;
    // Pointer to pointer
    cout << &p << endl;

    // Allocate memory in heap, this is c 
    int *o;
    o = (int*)malloc(5 * sizeof(int));
    // Allocate memory in heap, this is c++, it is better (safer)
    int *q;
    q = new int[5];
    return 0;
}