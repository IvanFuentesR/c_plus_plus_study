#include<iostream>

using namespace std;

// 4 bytes
struct Rectangle {
	int height; // 2 bytes
	int width; // 2 bytes
};

// 4 bytes
struct ComplexNumber {
	int real; // 2 bytes
	int img; // 2 bytes
};

// 87 bytes
struct Student {
	int roll; // 2 bytes
	char name[25]; // 25 bytes
	char dept[10]; // 10 bytes
	char address[50]; // 50 bytes
};

// 6 bytes
struct Card {
	int face; // 2 bytes
	int shape; // 2 bytes
	int color; // 2 bytes
};

int printRectangle(struct Rectangle r)
{
	cout<<"Rectangle height"<<endl;
	cout<<r.height<<endl;
	cout<<"Rectangle width"<<endl;
	cout<<r.width<<endl;
	cout<<"Rectangle Area"<<endl;
	cout<<r.width * r.height<<endl;
	return 0;
};

int printArray (int Array[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<Array[i]<<endl;
	}
	return 0;
};

int main()
{
	int A[5];
	A[0]=12;
	A[1]=15;
	A[2]=25;

	int B[10]={2,4,6,10,12,14};
	
	struct Rectangle r={10,5};
	struct Card deck[52]; // 312 bytes, 52*6, 52 cards, 6 bytes per card, 2+2+2, 2 bytes for each int.
	deck[0].face=1;
	cout<<sizeof(A)<<endl;
	printArray(A, 5);
	printRectangle(r);
	cout<<"First card face"<<endl;
	printf("%d\n", deck[0].face);

	return 0;
}