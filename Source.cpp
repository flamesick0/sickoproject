#include<iostream>
using namespace std;
void main() {
    setlocale(LC_ALL, "rus");
    int a, b, d;
    char c;
    int itog;
    cout << "|-----------------------|" << endl;
    cout << "|------ ���������: -----|" << endl;
    cout << "|---- ������� - '/' ----|" << endl;
    cout << "|--- ��������� - '*' ---|" << endl;
    cout << "|----- ����� - '+' -----|" << endl;
    cout << "|---- �������� - '/'----|" << endl;
    cout << "|-----------------------|" << endl;
    cout << "������� 1 �����:" << endl;
    cin >> a;
    cout << "������� �������������� ��������:" << endl;
    cin >> c;
    cout << "������� 2 �����:" << endl;
    cin >> b;
    switch (c)
    {
    case 1: d = a + b; break;
    case 2: d = a * b; break;
    case 3: d = a - b; break;
    case 4: d = a / b; break;
    cout << d << endl;
    default:
        cout << "� �� ���� ��� ��� �� ��������" << endl;
        break;
    }
    
}