#include <iostream>
#include <cmath>
#ifdef _WIN32
#include <windows.h>
#endif
#include "Task6.h"

/*(a:б):(с:д):(к:м)
пример 1: 1/3 : 2/1 : 3/1 = 1/18
пр 2 4/8 : 2/4 : 3/9 = 3/1
пр 3: -1/-2 : 1/-4 : 2/3 =3/1
пр 4: 1/2 : 0/4 : 2/3 = ошибка
*/

int main(){
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif

    int a, b, c, d, k, m;
    std::cout << "6 задача \n";
    std::cout << "Введите числитель 1 дроби (a): \n";
    std::cout << "Введите знаменатель 1 дроби (b): \n";
    std::cout << "Введите числитель 2 дроби (c): \n";
    std::cout << "Введите знаменатель 2 дроби (d): \n";
    std::cout << "Введите числитель 3 дроби (k): \n";
    std::cout << "Введите знаменатель 3 дроби (m): \n";
    std::cin >> a >> b >> c >> d >> k >> m;
    if (a == 0 || b == 0 || c == 0 || d == 0 || k == 0 || m == 0){
        std::cout << "error\n";
    }else{
        int res_div1_chisl, res_div1_znam;
        DIV(a, b, c, d, res_div1_chisl, res_div1_znam);
        int fin_chisl, fin_znam;
        DIV(res_div1_chisl, res_div1_znam, k, m, fin_chisl, fin_znam);
        std::cout << "RESULT: \n";
        std::cout << a << "/" << b << " : " << c << "/" << d << " : " << k << "/" << m << " = " << fin_chisl << "/" << fin_znam << "\n";
    }
    return 0;
}
