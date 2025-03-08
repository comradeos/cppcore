#include <iostream>        // Подключаем библиотеку для работы с вводом/выводом
#include <string>          // Подключаем библиотеку для работы со строками
#include "includes/separator.h" // Подключаем заголовочный файл, содержащий функцию sep()

// Определение базового класса Shape
class Shape {
    public:
    Shape() {                    // Конструктор базового класса
        description = "Shape";    // Устанавливаем значение description по умолчанию
    }
    void draw() {                // Метод вывода информации о фигуре
        std::cout << "Drawing a shape: " << description << std::endl; // Выводим описание фигуры
    }
    protected:
    std::string description {"Shape has a description"}; // Защищенное поле, содержащее описание фигуры
};

// Определение класса Square, наследуемого от Shape
class Square : public Shape {
    public:
    Square() {                    // Конструктор класса Square
        description = "Square";    // Устанавливаем описание для квадрата
    }
};

// Определение класса Circle, наследуемого от Shape
class Circle : public Shape {
    public:
    Circle() {                    // Конструктор класса Circle
        description = "Circle";    // Устанавливаем описание для круга
    }
};

// Главная функция программы
int main(int argc, char **argv)
{
    std::cout << "34_polymorphism" << std::endl; // Выводим заголовок программы

    sep(); // Вызываем функцию разделителя (предположительно, выводит линию или что-то подобное)

    Shape shape;           // Создаем объект базового класса Shape
    Shape * pShape = &shape; // Создаем указатель на объект Shape
    pShape->draw();         // Вызываем метод draw(), он использует поле description объекта Shape

    sep(); // Вызываем разделитель

    Square square;         // Создаем объект класса Square
    pShape = &square;      // Указатель на базовый класс теперь указывает на объект Square
    pShape->draw();        // Вызываем метод draw(), но он НЕ виртуальный → вызывается метод базового класса

    sep(); // Вызываем разделитель

    Circle circle;         // Создаем объект класса Circle
    pShape = &circle;      // Указатель на базовый класс теперь указывает на объект Circle
    pShape->draw();        // Вызываем метод draw(), но он НЕ виртуальный → вызывается метод базового класса

    sep();
    sep();
    sep();

    std::cout << "Using collection" << std::endl;

    sep();

    Shape * shapes[]{&shape, &square, &circle}; // Создаем массив указателей на объекты классов Shape, Square и Circle

    for (Shape * item : shapes) { // Проходим по всем элементам массива
        item->draw();           // Вызываем метод draw() для каждого объекта
    }

    return 0; // Завершаем программу
}
