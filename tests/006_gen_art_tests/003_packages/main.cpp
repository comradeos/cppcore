#include <iostream>
#include "libs/json/include/nlohmann/json.hpp"

int main() {
    // Создание JSON объекта
    nlohmann::json j;

    // Добавление данных
    j["name"] = "John Doe";
    j["age"] = 30;
    j["is_programmer"] = true;
    j["skills"] = {"C++", "Python", "JavaScript"};

    // Добавление сложного объекта
    j["address"] = {{"city", "New York"}, {"street", "5th Avenue"}};

    // Вывод JSON в консоль
    std::cout << j.dump(4) << std::endl; // Аргумент 4 означает отступ для красивого вывода

    return 0;
}

// g++ -I./libs/json/include main.cpp -o app ; ./app

// Создайте папку libs в вашем проекте, если она ещё не создана.
// git clone https://github.com/nlohmann/json.git ./libs/json
// #include "libs/json/include/nlohmann/json.hpp"
// g++ -I./libs/json/include main.cpp -o app ; ./app
