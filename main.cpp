#include <iostream>

using namespace std;

// Define a class named 'Rectangle'
class Rectangle {
public:
    // Member variables (data members)
    int length;
    int width;

    // Member functions (methods)
    int calculateArea() {
        return length * width;
    }

    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
};

int main() {
    // Create two objects of the Rectangle class
    Rectangle rect1, rect2;

    // Accessing member variables using the dot operator
    rect1.length = 5;
    rect1.width = 10;

    // Calling member functions using the dot operator
    int area1 = rect1.calculateArea();
    cout << "Area of rect1: " << area1 << endl;

    // Setting dimensions using a member function
    rect2.setDimensions(8, 6);

    int area2 = rect2.calculateArea();
    cout << "Area of rect2: " << area2 << endl;

    return 0;
}

