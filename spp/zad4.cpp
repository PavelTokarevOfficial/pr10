﻿

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(NULL, "rus");
    fstream inf("f.txt");
    ofstream outf("f.txt");
    string line;
    string strf = "odhfhCoueCffwh";
    cout << "Вводите строки:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> strf;
        outf << strf << "\n";
    }
    int max = -999999999;
    outf.close();
    int k = 0;
    string maxstr = "";
    while (getline(inf, line)) {
        if ((int)line.length() > max) {
            k++;
            max = line.length();
            maxstr = line;
        }
    }
    inf.close();

    cout << "Строка: " << maxstr << " и её длина: " << maxstr.length();
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
