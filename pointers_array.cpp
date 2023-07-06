#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int A[5]={2,4,6,8,10};
    int *p;
    p = A;
    
    for (int i=0; i<5; i++)
    {
        cout<<"Value of A[i] is: "<<A[i]<<endl;
        cout<<"Address of A[i] is: "<<p[i]<<endl;
    }

}