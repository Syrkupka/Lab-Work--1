﻿// Ex 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Zarplata: ";
    cin >> x;
    cout << "Vik: ";
    cin >> y;
    if (y > 20 && 400 < x && x < 1000) 
    {
        string ima, prizvishe, posada;
        cout << "We will consider your position" << endl;
        cout << "Input your ima, prizvishe and posada you want" << endl;
        cin >> ima >> prizvishe >> posada;
        cout << "Your Ima: " << ima << endl;
        cout << "Your Prizvishe: " << prizvishe << endl; 
        cout << "Posada you wanted: " << posada << endl;
        cout << "Vik: " << y << endl;
        cout << "Zarpata: " << x;
    }
    else
        cout << "You are not suitable";
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
