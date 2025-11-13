#include <iostream>
#include "Pr.h"
#include <cmath>

//1
bool IsPrime(int N){
    for (int i = 2; i < N/2; i++){
        if (N % i == 0){
            return false;
        }
    }
    return true;
}
void taskProc28(){
    std::cout << "1. Задача №1 - Proc28. \n";
    int number, count = 0;
    std::cout << "Введите число больше 1: \n";
    for (int i = 0; i < 10; i++){
        std::cin >> number;
        if (number > 1){
            if (IsPrime(number) == true){
                std::cout << number << " - True. \n";
                count += 1;
            }else{
                std::cout << number << " - False. \n";
                count += 0;
            }
        }else{
            std::cout << "Error! Введите число больше 1. Перезапустите программу. \n";
            break;
        }
    }
    std::cout << "Кол-во простых чисел вашего набора: " << count << "." << "\n";
    std::cout << "Конец задачи.";
}

//2
void SortInc(float& a, float& b, float& c){
    float x = 0.0;
    if (a > b){
        x = a;
        a = b;
        b = x;
    }
    if (b > c){
        x = b;
        b = c;
        c = x;
    }
    if (a > b){
        x = a;
        a = b;
        b = x;
    }
    // std::cout << a << b;
    // return c;
}
void taskProc12(){
    std::cout << "2. Задача №2 - Proc12. \n";
    for (int i = 1; i <= 2; i++){
        float a, b, c;
        std::cout << "Введите числа a" << i << " b" << i << " c" << i <<": ";
        std::cin >> a >> b >> c;
        SortInc(a, b, c);
        std::cout << a << " " << b << " " << c << "\n";
    }
    std::cout << "Конец задачи. \n";
}

//3
//-0.2 5 0.0001 ~ 2.68
float Power4(float x, float a, float eps){
    if (fabs(x) >= 1 || eps <= 0){
        std::cout << "Error! Введены неверные значения. \n";
        return 0;
    }
    float result = 0, per = 1;
    int i = 1;
    while (per >= eps && i <= a){
        per *= (1 + x);
        i++;
        result += per;
    }
    return result;
}
int taskProc45(){
    std::cout << "3. Задача №3 - Proc45. \n";
    float x, a, eps;
    std::cout << "введите значения х, а, епсилон: |x| < 1, eps > 0\n";
    std::cin >> x >> a >> eps;
    std::cout << "(1 + x) ^ a ~ " << Power4(x, a, eps) << "\n";
    std::cout << "Конец задачи. \n";
    return 0;
}

//4
int convert(int num, int p){
    int result = 0;
    double i = 0;
    while (num > 0){
        result += num % 10 * pow(p, i);
        i++;
        num /= 10;
    }
    return result;
}
int unconvert(int num, int p){
    int result = 0, power = 1;
    if (num == 0){
        return 0;
    }
    while (num > 0){
        int ost = num % p;
        result += power * ost;
        num /= p;
        power *= 10;
    }
    return result;
}
int multi(int num1, int num2, int p) {
    int n1 = convert(num1, p);
    int n2 = convert(num2, p);
    int mult = n1 * n2;
    int result = unconvert(mult, p);
    return result;
}
int power(int num1, int n, int p) {
    if (n == 0){
        return unconvert(1, p);
    }
    int result = num1;
    for (int i = 1; i < n; i++) { 
        result = multi(result, num1, p);
    }
    return result;
}
int taskTheTri18(){
    std::cout << "4. Задача №4 - TheTri18. \n";
    int a, cc, n;
    std::cout << "Введите число, систему счисления вашего числа и степень, в которую хотите возвести число\n";
    std::cin >> a >> cc >> n;
    if (cc < 2 || cc > 9) {
        std::cout << "Вы ввели неправильно СС. Перезапустите задачу. \n";
        return 1;
    }
    int res = power(a, n, cc);
    std::cout << "Результат возведения " << a << " " << cc << "-й системы счисления в " << n << " степень: " << res << "\n";
    std::cout << "Конец задачи. \n";
    return 0;
}

//5
int Rec(int N){
    if (N == 1){
        return 1;
    }else{
        return N + Rec(N - 1);
    }
}
int Summ(int N){
    if (N == 1){
        return 1;
    }else{
        return Rec(N) + Summ(N - 1);
    }
}
int taskReccur11(){
    std::cout << "5. Задача №5 - Reccur11. \n";
    float S;
    int N;
    std::cout << "Введите кол-во элементов для подсчёта - N\n";
    std::cin >> N;
    if (N >= 1 && N < 30){
        std::cout << Summ(N) << "\n";
    }else{
        std::cout << "Error\n";
    }
    std::cout << "Конец задачи. \n";
    return 0;
}
