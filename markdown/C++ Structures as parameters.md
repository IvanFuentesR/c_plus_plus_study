# Structures as parameters in C++
In C++, structures are passed to functions by value. This means that the function receives a copy of the structure, not a reference to the structure.

```cpp
struct Rectangle {
    int length;
    int width;
};

int area(Rectangle rectangle) {
    return rectangle.length * rectangle.width;
}
```

In difference to passing a structure by reference, passing a structure by value does not allow the function to modify the original structure. For example, the following function does not modify the original structure:

```cpp
void doubleLength(Rectangle rectangle) {
    rectangle.length *= 2;
}
```

If we outside of the doubleLength function print the length of the rectangle, we will see that the rectangle has not been modified:

```cpp
int main() {
    Rectangle rectangle = { 10, 5 };
    std::cout << rectangle.length << "\n";
    doubleLength(rectangle);
    std::cout << rectangle.length << "\n";
    return 0;
}
```

Output:

```cpp
10
10
```

## Passing structures by reference
If we want to allow a function to modify a structure, we can pass the structure by reference. This is done by using the & operator in the function declaration:

```cpp
void doubleLength(Rectangle &rectangle) {
    rectangle.length *= 2;
}
```

Now, if we outside of the doubleLength function print the length of the rectangle, we will see that the rectangle has been modified:

```cpp
int main() {
    Rectangle rectangle = { 10, 5 };
    std::cout << rectangle.length << "\n";
    doubleLength(rectangle);
    std::cout << rectangle.length << "\n";
    return 0;
}
```

Output:

```cpp
10
20
```

## Passing structures by pointer
If we want to allow a function to modify a structure, we can also pass the structure by pointer. This is done by using the * operator in the function declaration:

```cpp
void doubleLength(Rectangle *rectangle) {
    rectangle->length *= 2;
}
```

Now, if we outside of the doubleLength function print the length of the rectangle, we will see that the rectangle has been modified:

```cpp
int main() {
    Rectangle rectangle = { 10, 5 };
    std::cout << rectangle.length << "\n";
    doubleLength(&rectangle);
    std::cout << rectangle.length << "\n";
    return 0;
}
```

Output:

```cpp
10
20
```

## Passing structures by const reference
If we want to pass a structure to a function without allowing the function to modify the structure, we can pass the structure by const reference. This is done by using the const keyword in the function declaration:

```cpp
void printRectangle(const Rectangle &rectangle) {
    std::cout << rectangle.length << " " << rectangle.width << "\n";
}
```

Now, if we outside of the printRectangle function modify the length of the rectangle, we will see that the rectangle has not been modified:

```cpp
int main() {
    Rectangle rectangle = { 10, 5 };
    std::cout << rectangle.length << "\n";
    printRectangle(rectangle);
    rectangle.length = 20;
    printRectangle(rectangle);
    return 0;
}
```

Output:

```cpp
10
10 5
20 5
```

## Passing structures by const pointer
If we want to pass a structure to a function without allowing the function to modify the structure, we can also pass the structure by const pointer. This is done by using the const keyword in the function declaration:

```cpp
void printRectangle(const Rectangle *rectangle) {
    std::cout << rectangle->length << " " << rectangle->width << "\n";
}
```

Now, if we outside of the printRectangle function modify the length of the rectangle, we will see that the rectangle has not been modified:

```cpp
int main() {
    Rectangle rectangle = { 10, 5 };
    std::cout << rectangle.length << "\n";
    printRectangle(&rectangle);
    rectangle.length = 20;
    printRectangle(&rectangle);
    return 0;
}
```

Output:

```cpp
10
10 5
20 5
```

