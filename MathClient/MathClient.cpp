#include <iostream>
#include "MathLibrary.h"
#include <conio.h> // для использования функции _getch()

int main(){
setlocale(LC_ALL, "ru");
    while (true) {
        double a, b;
        char op;
        std::cout << "Введите выражение (формат: a + b): ";
        std::cin >> a >> op >> b;

        switch (op) {
        case '+':
            std::cout << "Результат: " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Результат: " << a - b << std::endl;
            break;
        case '*':
            std::cout << "Результат: " << a * b << std::endl;
            break;
        case '/':
            if (b != 0)
                std::cout << "Результат: " << a / b << std::endl;
            else
                std::cout << "Ошибка: деление на ноль." << std::endl;
            break;
        default:
            std::cout << "Неверный оператор." << std::endl;
        }

        std::cout << "Нажмите ESC для выхода или любую другую клавишу для продолжения." << std::endl;
        if (_getch() == 27) break; // 27 - код клавиши ESC
    }

    // Initialize a Fibonacci relation sequence.
    fibonacci_init(1, 1);
    // Write out the sequence values until overflow.
    do {
        std::cout << fibonacci_index() << ": "
            << fibonacci_current() << std::endl;
    } while (fibonacci_next());
    // Report count of values written before overflow.
    std::cout << fibonacci_index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << std::endl;
}