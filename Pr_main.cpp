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
    std::cout << "Выберите номер задачи 1-5: \n";
    std::cout << "1. Задача №1 \n";
    std::cout << "2. Задача №2 \n";
    std::cout << "3. Задача №3 \n";
    std::cout << "4. Задача №4 \n";
    std::cout << "5. Задача №5 \n";
    std::cout << "6. Задача №6 \n";
    std::cin >> Task;
    switch (Task){
        case 1: {
            output1();
            break;
            }
        case 2: {
            output2();
            break;
        }
        case 3: {
            output3();
            break;
        }
        case 4: {
            output4();
            break;
        }
        case 5: {
            output5();
            break;
        }
        default: {
            std::cout << "error\n";
            break;
        }
    }
    return 0;
}




