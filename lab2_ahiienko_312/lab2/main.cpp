#include <iostream>
#include <cmath> // підключення бібліотеки математичних функцій
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    // Integer12. Дано тризначне число.
    // Вивести число, отримане при прочитанні вихідного числа справа наліво.
    cout << "Integer12." << endl;
    int number, d3, d2, d1, res1; // декларація цілих змінних
    // введення данних
    cout << "number = ";
    cin >> number;
    // підрахунок
    d3 = number / 100;
    d2 = (number / 10) % 10;
    d1 = number % 10;
    res1 = d1 * 100 + d2 * 10 + d3;
    // виведення результату
    cout << "res1 = " << res1 << endl;

    // Boolean37. Дано координати двох різних полів шахівниці x1, y1, x2, y2.
    // Перевірити істинність висловлювання: «Король за один хід може перейти з одного поля на інше».
    cout << "\n Boolean37. \n";
    int x1, y1, x2, y2; // декларація цілих змінних
    // введення данних
    cout << "x1, y1 = ";
    cin >> x1 >> y1;
    cout << "x2, y2 = ";
    cin >> x2 >> y2;
    // підрахунок
    bool res2 = (abs(x1 - x2) <= 1) && (abs(y1 - y2) <= 1); // визначення ЛОГІЧНОЇ змінної
    // виведення результату
    cout << "King can move: " << boolalpha << res2 << endl;

    // Math22. Обчислити значення виразу y = 3x^6 - 6x^2 - 7.
    cout << "\n Math22. \n";
    double x, y; // декларація дійсних змінних
    // введення данних
    cout << "Real argument x = ";
    cin >> x;
    // підрахунок
    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    // виведення результату
    cout << "y = " << y << endl;

    return 0;
}