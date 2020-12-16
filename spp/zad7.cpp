

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outf("f.txt");
    string line;
    string nums_str = "";
    for (int i = -10; i <= 10; i++) {
        outf << i << "\n";
    }
    outf.close();

    ofstream outg("g.txt");
    for (int i = 10; i >= -10; i--) {
        outg << i << "\n";
    }
    outg.close();

    fstream inf("f.txt");

    ofstream outh("h.txt");

    while (getline(inf, line)) {
        outh << line << "\n";
    }
    inf.close();
    outh.close();

    fstream inh("h.txt");
    fstream ing("g.txt");

    outf.open("f.txt");

    while (getline(ing, line)) {
        outf << line << "\n";
    }
    outf.close();

    outg.open("g.txt");
    while (getline(inh, line)) {
        outg << line << "\n";
    }
    outg.close();
    inh.close();

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
