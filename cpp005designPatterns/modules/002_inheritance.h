#include <string>
#include <iostream>

using namespace std;

class Rectangle002 {
    float height;
    float width;
public:
    Rectangle002(float height, float width) {
        this->height = height;
        this->width = width;
    }

    [[nodiscard]]
    float square() const {
        return this->height * this->width;
    }
};

class Window002: public Rectangle002 {
public:
    string brand;
    Window002(float height, float width, string brand) : Rectangle002(height, width) {
        this->brand = std::move(brand);
    }
};

void InheritanceTest() {
    Window002 win(2, 3, "io");
    Window002 * pWin = &win;
    float result = win.square();
    cout << win.brand << endl;
    cout << result << endl;
    std::free(pWin);
}