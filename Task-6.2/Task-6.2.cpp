// Task-6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "calculate.h"

void command(Counter* user_count_adr, std::string user_com) {
    if (user_com == "+") {
        user_count_adr->add_1();

    }
    else if (user_com == "-") {
        user_count_adr->substract_1();

    }
    else if (user_com == "=") {
        std::cout << user_count_adr->get_current_num() << '\n';

    }
    else if (user_com == "х") {
        std::cout << "До свидания!";
    }
}


int main() {

    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    std::string answer;
    int user_num;
    std::string user_com;

    std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
    std::cin >> answer;
    if (answer == "да") {

        std::cout << "Введите начальное значение: счетчика: ";
        std::cin >> user_num;

        Counter user_count{ user_num };

        do {

            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> user_com;
            std::cout << '\n';

            command(&user_count, user_com);


        } while (user_com != "х");


    }
    else if (answer == "нет") {
        Counter user_count;

        do {

            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> user_com;
            std::cout << '\n';
            command(&user_count, user_com);


        } while (user_com != "х");


    }



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
