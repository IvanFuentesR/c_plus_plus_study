#include <iostream>
#include <stdio.h>

using namespace std;

void fun (int A[], int n) {
    int i;
    int n = sizeof(A)/sizeof(A[0]);
    for (i=0; i<n; i++) {
        cout<<A[i]<<endl;
    }
}

int main () {
    int A[5]={2,4,6,8,10};
    return 0;
}