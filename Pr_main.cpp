#include <iostream>
#include "Pr.h"
#include <cmath>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif

    int Task;
    std::cout << "Выберите пункт 1-6: \n";
    std::cout << "1. Задача №1 Proc28 \n";
    std::cout << "2. Задача №2 Proc12 \n";
    std::cout << "3. Задача №3 Proc45 \n";
    std::cout << "4. Задача №4 TheTri18 \n";
    std::cout << "5. Задача №5 Reccur11 \n";
    std::cout << "6. Выход из программы \n";
    while (Task != 6){
        std::cin >> Task;
        switch (Task){
            case 1: {
                taskProc28();
                break;
                }
            case 2: {
                taskProc12();
                break;
            }
            case 3: {
                taskProc45();
                break;
            }
            case 4: {
                taskTheTri18();
                break;
            }
            case 5: {
                taskReccur11();
                break;
            }
            case 6: {
                std::cout << "Вы вышли из программы.\n";
                return 0;
                break;
            }
            default:
                std::cout << "Введены неверные данные\n";
                break;
        }
    }
}




