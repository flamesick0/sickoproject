#include<iostream>
using namespace std;
void main() {
    setlocale(LC_ALL, "rus");
    int a, b, d;
    char c;
    int itog;
    cout << "|-----------------------|" << endl;
    cout << "|------ Операторы: -----|" << endl;
    cout << "|---- Деление - '/' ----|" << endl;
    cout << "|--- Умножение - '*' ---|" << endl;
    cout << "|----- Сумма - '+' -----|" << endl;
    cout << "|---- Разность - '/'----|" << endl;
    cout << "|-----------------------|" << endl;
    cout << "Введите 1 число:" << endl;
    cin >> a;
    cout << "Введите арифметическое действие:" << endl;
    cin >> c;
    cout << "Введите 2 число:" << endl;
    cin >> b;
    switch (c)
    {
    case 1: d = a + b; break;
    case 2: d = a * b; break;
    case 3: d = a - b; break;
    case 4: d = a / b; break;
    cout << d << endl;
    default:
        cout << "Я не знаю что это за действие" << endl;
        break;
    }
    
}