# Arrays as parameters in C++
In C++, arrays are passed to functions by reference. This means that the function receives the address of the array, not a copy of the array. This is because arrays can be very large and copying them would be expensive. The function can then modify the array if it wants to.

```cpp
void printArray(int *array, int size) {
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
}
```

In difference to passing an array by value, passing an array by reference allows the function to modify the original array. For example, the following function doubles all the values in the array:

```cpp
void doubleArray(int *array, int size) {
    for (int i = 0; i < size; i++)
        array[i] *= 2;
}
```

If we outside of the doubleArray function print the array, we will see that the array has been modified:

```cpp
int main() {
    int array[5] = { 1, 2, 3, 4, 5 };
    printArray(array, 5);
    doubleArray(array, 5);
    printArray(array, 5);
    return 0;
}
```

Output:

```cpp
1 2 3 4 5
2 4 6 8 10
```
