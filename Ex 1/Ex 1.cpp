// L.W222.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Input length: ";
    cin >> a;
    cout << "Input width: ";
    cin >> b;

    int S = a * b;
    int P = 2 * (a + b);

    float S_float = S;
    float P_float = P;

    cout << "Area: " << S_float << endl;
    cout << "Perimeter: " << P_float << endl;

    cout << "Sum: " << S_float + P_float<< endl;
    cout << "Difference: " << S_float - P_float << endl;
    cout << "Product: " << S_float * P_float << endl;
    cout << "Quotient: " << S_float / P_float << endl;

    cout << "Address length: " << &a << endl;
    cout << "Address width: " << &b << endl;
    cout << "Address area: " << &S << endl;
    cout << "Address perimeter: " << &P << endl;
    cout << "Address area (float): " << &S_float << endl;
    cout << "Address perimeter (float): " << &P_float << endl;

    system("pause>void");
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
