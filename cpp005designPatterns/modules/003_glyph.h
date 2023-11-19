#include <string>
#include <iostream>

class Glyph {
    void Draw() {
        printf("Glyph->Draw()\n");
    };
};

class Rectangle : Glyph {
public:
    static void Draw() {
        printf("Rectangle->Draw()\n");
    };
};

void Test() {
    printf("Test\n");
    Rectangle::Draw();
};