#include <iostream>

using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle(5, 3);
    cout << "Plocha obdélníku: " << rectangle.getArea() << endl;
    cout << "ahoj " << endl;

    return 0;
}
