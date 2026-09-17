#include <iostream>



using namespace std;



int main() {

    system("chcp 65001");

    // Задача 1

    cout << "task 1" << endl;

    double A, B, C, temp;



    cout << "Enter A: ";

    cin >> A;

    cout << "Enter B: ";

    cin >> B;

    cout << "Enter C: ";

    cin >> C;



    temp = A;

    A = B;

    B = C;

    C = temp;



    cout << "Нові значення: A = " << A << ", B = " << B << ", C = " << C << endl;



    // Задача 2

    cout << "Задача 2" << endl;

    double V, U, T1, T2, S;



    cout << "Введіть швидкість човна V: ";

    cin >> V;

    cout << "Введіть швидкість течії U: ";

    cin >> U;

    cout << "Введіть час по озеру T1: ";

    cin >> T1;

    cout << "Введіть час проти течії T2: ";

    cin >> T2;



    S = (V * T1) + ((V - U) * T2);



    cout << "Загальний шлях S = " << S << endl;



    // Задача 3

    cout << "Задача 3" << endl;

    double L, D;

    double pi = 3.14;



    cout << "Введіть довжину кола L: ";

    cin >> L;



    D = L / pi;



    cout << "Діаметр кола D = " << D << endl;



    return 0;

}