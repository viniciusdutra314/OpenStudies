#include <stdio.h>

// Abstract class
class Shape {
public:
    virtual int area() = 0;  // Pure virtual function
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    int width;
    int height;

public:
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle a;
    a.width = 3;
    a.height = 6;
    printf("%d", a.area());

    return 0;
}
