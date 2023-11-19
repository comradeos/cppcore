#include <iostream>
#include <string>

class Car {
public:
    int seats;
    int wheels;
    string color = "unknown";
    string manufacturer = "unknown";
};

class IBuilder {
    virtual void SetSeats(int number) = 0;
    virtual void SetWheels(int number) = 0;
    virtual void SetColor(string color) = 0;
    virtual void SetManufacturer(string manufacturer) = 0;
    virtual Car GetCar() = 0;
};

class Builder : IBuilder {
private:
    Car _car;
public:
    void SetSeats(int number) override {
        this->_car.seats = number;
    }

    void SetWheels(int number) override {
        this->_car.wheels = number;
    }

    void SetColor(string color) override {
        this->_car.color = color;
    }

    void SetManufacturer(string manufacturer) override {
        this->_car.manufacturer = manufacturer;
    }

    Car GetCar() override {
        return this->_car;
    }
};

class Director {
private:
    Builder _builder;
public:
    Car MakeCompletedCar() {
        _builder.SetManufacturer("BMW");
        _builder.SetColor("RED");
        _builder.SetSeats(6);
        _builder.SetWheels(4);

        return _builder.GetCar();
    }
};


void BuilderTest() {
    Director director;
    Car car = director.MakeCompletedCar();
    printf("%s\n", car.manufacturer.c_str());
}