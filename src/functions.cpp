#include <stdio.h>

using namespace std;

// This is call by value, so the original values of x and y are not changed.
void swap (int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x is %d, y is %d\n", x, y);
}

// This is call by address, so the original values of x and y are changed. * is the dereference operator. It is used to access the value stored in a variable pointed by a pointer variable. It is also called indirection operator.
void swapByAddress (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("x is %d, y is %d\n", *x, *y);
}

// This is call by reference, so the original values of x and y are changed. & is the reference operator and it is only available in C++. A reference is an alias to a variable. It is created by adding & to the variable name. It must be initialized to an existing variable when it is created. It cannot be NULL. It cannot be changed to refer to another variable. It cannot be uninitialized.
void swapByReference (int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x is %d, y is %d\n", x, y);
}

int main() {
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    printf("a is %d, b is %d\n", a, b);
    // & is the address of operator
    swapByAddress(&a, &b);
    printf("a is %d, b is %d\n", a, b);
    swapByReference(a, b);
    printf("a is %d, b is %d\n", a, b);
}