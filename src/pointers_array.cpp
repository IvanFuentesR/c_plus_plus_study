#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle {
    int height;
    int width;
};

int pointers_array_size_of() {
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<"Size of p1 is: "<<sizeof(p1)<<endl;
    cout<<"Size of p2 is: "<<sizeof(p2)<<endl;
    cout<<"Size of p3 is: "<<sizeof(p3)<<endl;
    cout<<"Size of p4 is: "<<sizeof(p4)<<endl;
    cout<<"Size of p5 is: "<<sizeof(p5)<<endl;
    return 0;
}

int main() {
    int A[5]={2,4,6,8,10};
    int *p;
    p = A;
    
    for (int i=0; i<5; i++)
    {
        cout<<"Value of A[i] is: "<<A[i]<<endl;
        cout<<"Address of A[i] is: "<<p[i]<<endl;
    }

    pointers_array_size_of();
    return 0;
}