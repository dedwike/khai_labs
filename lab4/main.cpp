#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

// оголошення функцій
void RectPS(double x1, double y1, double x2, double y2, double & P, double & S); // обчислення периметра і площі прямокутника (Proc5)
bool IsRightTriangle(double a, double b, double c); // перевірка трикутника на прямокутність (Proc48)
void task_Proc5(); // процедура виконання Proc5
void task_Proc48(); // процедура виконання Proc48

bool in_N(int & pN); // введення тризначного числа з перевіркою (Integer12)
int rev_num(int pN); // перевертання тризначного числа (Integer12)
void out_res(int pr); // виведення результату (Integer12)
void task_Int12(); // процедура виконання Integer12

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int menu;

    cout << "Меню:" << endl;
    cout << "1 - Завдання 1.1 (Proc5)" << endl;
    cout << "2 - Завдання 1.2 (Proc48)" << endl;
    cout << "3 - Завдання 2 (Integer12)" << endl;
    cout << "0 - Вихід" << endl;
    cout << "Виберіть пункт: ";
    cin >> menu;

    if (cin.fail())
    {
        cout << "Помилка введення!" << endl;
        return 1;
    }

    switch (menu)
    {
    case 1:
        task_Proc5();
        break;
    case 2:
        task_Proc48();
        break;
    case 3:
        task_Int12();
        break;
    case 0:
        cout << "Вихід з програми." << endl;
        break;
    default:
        cout << "Невірний пункт меню!" << endl;
    }

    return 0;
}

// визначення функцій

void RectPS(double x1, double y1, double x2, double y2, double & P, double & S)
{
    double a = fabs(x2 - x1);
    double b = fabs(y2 - y1);
    P = 2 * (a + b);
    S = a * b;
}

void task_Proc5()
{
    double x1, y1, x2, y2, P, S;

    cout << "Прямокутник 1 (x1, y1, x2, y2 в діапазоні [-100, 100]): ";
    cin >> x1 >> y1 >> x2 >> y2;
    if (cin.fail() || x1 < -100 || x1 > 100 || y1 < -100 || y1 > 100 || x2 < -100 || x2 > 100 || y2 < -100 || y2 > 100)
    {
        cout << "Помилка введення або вихід за межі [-100, 100]!" << endl;
        return;
    }
    RectPS(x1, y1, x2, y2, P, S);
    cout << "P1 = " << P << ", S1 = " << S << endl;

    cout << "Прямокутник 2 (x1, y1, x2, y2 в діапазоні [-100, 100]): ";
    cin >> x1 >> y1 >> x2 >> y2;
    if (cin.fail() || x1 < -100 || x1 > 100 || y1 < -100 || y1 > 100 || x2 < -100 || x2 > 100 || y2 < -100 || y2 > 100)
    {
        cout << "Помилка введення або вихід за межі [-100, 100]!" << endl;
        return;
    }
    RectPS(x1, y1, x2, y2, P, S);
    cout << "P2 = " << P << ", S2 = " << S << endl;

    cout << "Прямокутник 3 (x1, y1, x2, y2 в діапазоні [-100, 100]): ";
    cin >> x1 >> y1 >> x2 >> y2;
    if (cin.fail() || x1 < -100 || x1 > 100 || y1 < -100 || y1 > 100 || x2 < -100 || x2 > 100 || y2 < -100 || y2 > 100)
    {
        cout << "Помилка введення або вихід за межі [-100, 100]!" << endl;
        return;
    }
    RectPS(x1, y1, x2, y2, P, S);
    cout << "P3 = " << P << ", S3 = " << S << endl;
}

bool IsRightTriangle(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0) return false;
    if (a + b <= c || a + c <= b || b + c <= a) return false;

    if (fabs(a * a + b * b - c * c) < 0.0001 ||
        fabs(a * a + c * c - b * b) < 0.0001 ||
        fabs(b * b + c * c - a * a) < 0.0001)
        return true;
    else
        return false;
}

void task_Proc48()
{
    double a, b, c;

    cout << "Трикутник 1 (a, b, c в діапазоні [-100, 100]): ";
    cin >> a >> b >> c;
    if (cin.fail() || a < -100 || a > 100 || b < -100 || b > 100 || c < -100 || c > 100)
    {
        cout << "Помилка введення або вихід за межі [-100, 100]!" << endl;
        return;
    }
    if (IsRightTriangle(a, b, c)) cout << "Трикутник 1 прямокутний" << endl;
    else cout << "Трикутник 1 не прямокутний" << endl;

    cout << "Трикутник 2 (a, b, c в діапазоні [-100, 100]): ";
    cin >> a >> b >> c;
    if (cin.fail() || a < -100 || a > 100 || b < -100 || b > 100 || c < -100 || c > 100)
    {
        cout << "Помилка введення або вихід за межі [-100, 100]!" << endl;
        return;
    }
    if (IsRightTriangle(a, b, c)) cout << "Трикутник 2 прямокутний" << endl;
    else cout << "Трикутник 2 не прямокутний" << endl;

    cout << "Трикутник 3 (a, b, c в діапазоні [-100, 100]): ";
    cin >> a >> b >> c;
    if (cin.fail() || a < -100 || a > 100 || b < -100 || b > 100 || c < -100 || c > 100)
    {
        cout << "Помилка введення або вихід за межі [-100, 100]!" << endl;
        return;
    }
    if (IsRightTriangle(a, b, c)) cout << "Трикутник 3 прямокутний" << endl;
    else cout << "Трикутник 3 не прямокутний" << endl;
}

void task_Int12()
{
    int N;
    if (in_N(N))
        cout << "Помилка: введіть тризначне число (100..999)!" << endl;
    else
        out_res(rev_num(N));
}

bool in_N(int & pN)
{
    cout << "N = ";
    cin >> pN;
    if (cin.fail())
        return true;
    else if (pN < 100 || pN > 999)
        return true;
    else
        return false;
}

int rev_num(int pN)
{
    int s = pN / 100;
    int d = (pN / 10) % 10;
    int o = pN % 10;
    return o * 100 + d * 10 + s;
}

void out_res(int pr)
{
    cout << "Result = " << pr << endl;
}