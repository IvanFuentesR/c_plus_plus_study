#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int height;
    int width;
};

int main()
{
    struct Rectangle r = {10, 5};
    cout<<r.height<<endl;
    cout<<r.width<<endl;

    Rectangle *p = &r;
    cout<<p->height<<endl;
    cout<<p->width<<endl;

    return 0;
}