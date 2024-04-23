//solving area of a rectangle using class function
#include <iostream>

using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    float area() {
        return length * width;
    }

    void show() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    int sameArea(Rectangle other) {
        return (area() == other.area()) ? 1 : 0;
    }
};

int main() {
    Rectangle rect1, rect2;

    //first rectangle
    rect1.setLength(5);
    rect1.setWidth(2.5);

    // second rectangle
    rect2.setLength(5);
    rect2.setWidth(18.9);

    // Display first rectangle
    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout << "Perimeter: " << rect1.perimeter() << ", Area: " << rect1.area() << endl;

    // Display second rectangle
    cout << "\nRectangle 2:" << endl;
    rect2.show();
    cout << "Perimeter: " << rect2.perimeter() << ", Area: " << rect2.area() << endl;

    // Check same area
    if (rect1.sameArea(rect2)) {
        cout << "\nThe two rectangles have the same area." << endl;
    } else {
        cout << "\nThe two rectangles do not have the same area." << endl;
    }

    // Set new dimesions for rectangle
    rect1.setLength(15);
    rect1.setWidth(6.3);

    // Display updated information
    cout << "\nUpdated Rectangle 1:" << endl;
    rect1.show();
    cout << "Perimeter: " << rect1.perimeter() << ", Area: " << rect1.area() << endl;

    // Display information about the second rectangle
    cout << "\nRectangle 2:" << endl;
    rect2.show();
    cout << "Perimeter: " << rect2.perimeter() << ", Area: " << rect2.area() << endl;

    
    if (rect1.sameArea(rect2)) {
        cout << "\nThe two rectangles have the same area." << endl;
    } else {
        cout << "\nThe two rectangles do not have the same area." << endl;
    }

    return 0;
}
