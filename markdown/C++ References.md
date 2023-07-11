# C++ References
A reference in C++ is an alias for another variable. It is a way to access the same memory location as another variable. References are declared using the `&` symbol. References are often used as function parameters to avoid copying large objects. References are also used to return multiple values from a function.

## Reference Declaration
References are declared using the `&` symbol. The `&` symbol is used to declare a reference and to access the value of the variable that the reference is referencing. The `&` symbol is also used to get the address of a variable. This is why references are often called "references" and not "pointers" because they are not pointers. They are just a way to access the same memory location as another variable.

```cpp
int x = 5;
int& y = x; // y is a reference to x
y = 10; // x is now 10
```

## Reference as Function Parameter
References are often used as function parameters to avoid copying large objects. When a reference is passed to a function, the function can modify the value of the variable that the reference is referencing. This is because the reference is referencing the same memory location as the variable that was passed to the function. This is also why references are often used as function parameters to avoid copying large objects. If a large object is passed to a function by value, the function will make a copy of the object. This can be very inefficient if the object is large. If a large object is passed to a function by reference, the function will not make a copy of the object. Instead, the function will just access the same memory location as the object that was passed to the function.

```cpp
void addOne(int& x) {
    x += 1;
}

int main() {
    int x = 5;
    addOne(x);
    std::cout << x << std::endl; // 6
    return 0;
}
```

## Reference as Function Return Value
References are also used to return multiple values from a function. This is because a function can only return one value. If a function needs to return multiple values, it can return a reference to a struct or class that contains the values that need to be returned.

```cpp
struct Point {
    int x;
    int y;
};

Point& getPoint() {
    static Point p = { 5, 10 };
    return p;
}

int main() {
    Point& p = getPoint();
    std::cout << p.x << ", " << p.y << std::endl; // 5, 10
    return 0;
}
```

## Reference vs Pointer
References are often confused with pointers. They are similar in that they both allow you to access the same memory location as another variable. However, they are different in that references cannot be reassigned to reference a different variable and: 

- References cannot be null. 
- References cannot be dereferenced. 
- References cannot be used in pointer arithmetic. 

```cpp
int x = 5;
int& y = x; // y is a reference to x
int* z = &x; // z is a pointer to x
```

