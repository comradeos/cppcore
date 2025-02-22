#include <iostream>
#include <concepts>

// Определяем концепт MyIntegral: 
// - Проверяем, является ли T целочисленным (std::integral<T>)
// - Проверяем, что размер T >= 2 байтов
template <typename T>
concept MyIntegral = std::integral<T> && (sizeof(T) >= 2);

// Функция, принимающая только типы, удовлетворяющие MyIntegral
void printDouble(MyIntegral auto value) {
    std::cout << "Удвоенное значение: " << (value * 2) << std::endl;
}

int main() {
    printDouble(10);      // ✅ int (обычно 4 байта) - работает
    printDouble(5L);      // ✅ long (обычно 8 байт) - работает
    printDouble(short(3)); // ✅ short (обычно 2 байта) - работает

    // printDouble('A');   // ❌ char (обычно 1 байт) - ошибка компиляции
    // printDouble(true);  // ❌ bool (обычно 1 байт) - ошибка компиляции

    return 0;
}
