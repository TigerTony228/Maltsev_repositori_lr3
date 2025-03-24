#include <iostream>

using namespace std;

void proverka(int& number)
{
    while ((!(cin >> number) || (cin.peek() != '\n')))
    {
        cin.clear();
        while (cin.get() != '\n');
        {
            cout << "введите корректное число" << endl;
        }
    }
}

void task1()
{

}

void task2()
{

}

void menu()
{
    int number;

    do {
        cout << "1. округлить х до у разрядов" << endl;
        cout << "2. отбросить целую часть от х" << endl;
        cout << "3. выход" << endl;
        cout << "введите номер задания(от 1 до 2) или 3 для выхода из программы: ";

        proverka(number);

        switch (number)
        {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            cout << "выход" << endl;
            exit(0);

        default: menu();
        }
    } while (number != 4);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    menu();

    return 0;
}