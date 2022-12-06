// Apteka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

struct medicine {
    char name[20];
    int shelfLife;
    int price;
    int ctu;
};

void maxPriceMedicine (int arg[], int it) {
    int max = 0;

}


int main()
{
    medicine apt[2];
    int aptLen = 2;
    int max = 0;
    int aptPriceSum = 0;
    int aptCout = 0;

    setlocale(LC_ALL, "Russian");

    for (int i = 0; i < aptLen; i++) {
        cout << "Введите название лекарства:";
        cin >> apt[i].name;
        cout << "Введите цену: " ;
        cin >> apt[i].price;
        cout << "Введите срок годности " << apt[i].name << ":";
        cin >> apt[i].shelfLife;
        cout << "Введите кол-во на складе:";
        cin >> apt[i].ctu;
    }
    int min = apt[0].price;

    for (int i = 0; i < aptLen; i++) {
        if (apt[i].price > max) {
            max = apt[i].price;
        }
    }
    cout << "Максимальная цена лекарства на складе: " << max << endl;


    for (int i = 0; i < aptLen; i++) {
        if (apt[i].price < min) {
            min = apt[i].price;
        }
    }

    cout << "Минимальная цена лекарства на складе: " << min << endl;

    for (int i = 0; i < aptLen; i++) {
        if (apt[i].shelfLife > 3) {
            cout << "Лекарство " << apt[i].name << " имеет срок хранения больше 3 месяцев" << endl;
        }
    }

    for (int i = 0; i < aptLen; i++) {
        aptPriceSum += apt[i].price;
    }

    cout << "Общая сумма всех лекарств: " << aptPriceSum << endl;

    for (int i = 0; i < aptLen; i++) {
        aptCout += apt[i].ctu;
    }

    cout << "Количество всех лекарств: " << aptCout << endl;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   2. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
