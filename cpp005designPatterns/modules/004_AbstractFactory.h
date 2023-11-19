#include <iostream>
#include <string>

using namespace std;

class IChair {
public:
    virtual void sitOn() = 0;
private:
    int legs = 0;
    string color;
    string brand;
};

class Chair : public IChair {
public:
    Chair(int legs, string color) {
        this->legs = legs;
        this->color = std::move(color);
    }
    void sitOn() override {
        printf("you are sitting on %s chair with %d legs\n", this->color.c_str(), this->legs);
    }
private:
    int legs;
    string color;
    string brand;
};


void AbstractFactoryTest() {
    Chair chair(4, "red");
    chair.sitOn();
}
