#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Default constructor
    Rectangle() : width(0.0), length(0.0) {}

    // Parameterized constructor
    Rectangle(double w, double l) : width(0.0), length(0.0) {
        setWidth(w);
        setLength(l);
    }

    // Setters (reject negative values)
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            cout << "Error: width cannot be negative. Value unchanged.\n";
        }
    }

    void setLength(double l) {
        if (l >= 0) {
            length = l;
        } else {
            cout << "Error: length cannot be negative. Value unchanged.\n";
        }
    }

    // Getters
    double getWidth() const { return width; }
    double getLength() const { return length; }

    // Calculations
    double area() const { return width * length; }
    double perimeter() const { return 2 * (width + length); }
};

int main() {
    cout << fixed << setprecision(2);

    // Example 1: default constructor, then set dimensions
    cout << "--- Rectangle 1 (default constructor, then setters) ---\n";
    Rectangle r1;
    cout << "Initial width: " << r1.getWidth()
         << ", length: " << r1.getLength() << endl;

    r1.setWidth(5.0);
    r1.setLength(8.0);
    cout << "After setting -> width: " << r1.getWidth()
         << ", length: " << r1.getLength() << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    // Example 2: parameterized constructor
    cout << "\n--- Rectangle 2 (parameterized constructor) ---\n";
    Rectangle r2(3.5, 12.0);
    cout << "Width: " << r2.getWidth()
         << ", Length: " << r2.getLength() << endl;
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    // Example 3: modifying an existing object
    cout << "\n--- Rectangle 2 after modification ---\n";
    r2.setWidth(10.0);
    cout << "New width: " << r2.getWidth()
         << ", Length: " << r2.getLength() << endl;
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    // Example 4: invalid input is rejected
    cout << "\n--- Rectangle 3 (invalid input test) ---\n";
    Rectangle r3(4.0, 6.0);
    r3.setWidth(-2.0);   // should be rejected
    cout << "Width still: " << r3.getWidth() << endl;
    cout << "Area: " << r3.area() << endl;

    return 0;
}