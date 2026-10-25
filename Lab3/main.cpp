#include <iostream>
#include <cmath>

using namespace std;

//If17. Дано три змінні дійсного типу: A, B, C. Якщо їх значення впорядковані
//за зростанням або спаданням, то подвоїти їх; в іншому випадку замінити значення
//кожної змінної на протилежне. Вивести нові значення змінних A, B, C.
void task_if17(); // завдання 1a декларація функції

//If15. Дано три числа. Знайти суму двох найбільших з них.
void task_if15(); // завдання 1b декларація функції

//Завдання 2. Дано координати точки на площині (x, y).
//Визначити, чи потрапляє точка в червону фігуру (Варіант 5) і вивести повідомлення.
void task_geom5(); // завдання 2 декларація функції

//Завдання 3. Організація меню в командному вікні за допомогою switch.
int main()
{
    int menu;
    cout << "Task number (1 - If17, 2 - If15, 3 - Geom5): ";
    cin >> menu;

    // перемикання між завданнями
    switch (menu)
    {
    case 1:
        task_if17();
        break; // Завдання 1a
    case 2:
        task_if15();
        break; // Завдання 1b
    case 3:
        task_geom5();
        break; // Завдання 2
    default:
        cout << "Wrong task! (Only 1, 2, 3)" << endl; // повідомлення про помилку
        break;
    }

    system("pause");
    return 0;
}

// завдання 1a реалізація
void task_if17()
{
    double a, b, c;
    cout << "If 17" << endl;
    cout << "Enter A, B, C: ";
    cin >> a >> b >> c;

    if (cin) { // перевірка чи введено числа
        if ((a < b && b < c) || (a > b && b > c)) { // якщо впорядковані
            a *= 2;
            b *= 2;
            c *= 2;
        } else { // якщо не впорядковані
            a = -a;
            b = -b;
            c = -c;
        }
        cout << "Result: " << a << " " << b << " " << c << endl;
    } else {
        cout << "Wrong data!" << endl;
    }
}

// завдання 1b реалізація
void task_if15()
{
    double a, b, c;
    cout << "If 15" << endl;
    cout << "Enter A, B, C: ";
    cin >> a >> b >> c;

    if (cin) { // перевірка чи введено числа
        double sum;
        if (a <= b && a <= c) {
            sum = b + c; // 'a' найменше
        } else if (b <= a && b <= c) {
            sum = a + c; // 'b' найменше
        } else {
            sum = a + b; // 'c' найменше
        }
        cout << "Sum of two largest numbers: " << sum << endl;
    } else {
        cout << "Wrong data!" << endl;
    }
}

// завдання 2 реалізація (Номер 5)
void task_geom5()
{
    double r1, r2, a, x, y;
    cout << "Geom 5" << endl;
    cout << "Enter r1 (radius of inner circles): ";
    cin >> r1;
    cout << "Enter r2 (radius of outer circle): ";
    cin >> r2;
    cout << "Enter a (distance between centers): ";
    cin >> a;

    if (!cin || r1 <= 0 || r2 <= 0 || a <= 0) {
        cout << "Incorrect figure parameters!" << endl;
        return;
    }

    cout << "Enter coordinates (x, y): ";
    cin >> x >> y;

    if (cin) {
        // Координати центрів двох малих кіл (під кутом 45 градусів)
        double cos45 = 0.70710678;
        double sin45 = 0.70710678;

        double xc1 = -a * cos45;
        double yc1 = a * sin45;

        double xc2 = a * cos45;
        double yc2 = -a * sin45;

        // Перевірка належності першому або другому малому колу
        bool in_circle1 = ((x - xc1) * (x - xc1) + (y - yc1) * (y - yc1) <= r1 * r1);
        bool in_circle2 = ((x - xc2) * (x - xc2) + (y - yc2) * (y - yc2) <= r1 * r1);

        // Червона область (Варіант 5) - об'єднання двох малих кіл
        if (in_circle1 || in_circle2) {
            cout << "Point belongs to the red area (Variant 5)." << endl;
        } else {
            cout << "Point does NOT belong to the red area." << endl;
        }
    } else {
        cout << "Wrong coordinates!" << endl;
    }
}