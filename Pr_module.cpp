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
int output1(){
    int number, count = 0;
    std::cout << "введите число > 1 \n";
    for (int i = 0; i < 10; i++){
        std::cin >> number;
        if (number <= 0){
            count += 0;
        }else if (number > 1 && IsPrime(number) == true){
            count += 1;
        }
    }
    std::cout << "кол-во простых чисел вашего набора: " << count;
    return 0;
}

//2
int SortInc(float a, float b, float c){
    float x;
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
    std::cout << a << b;
    return c;
}
int output2(){
    float a1, b1, c1, a2, b2, c2;
    std::cout << "Введите набор числа из трёх цифр №1\n";
    std::cin >> a1 >> b1 >> c1;
    std::cout << "Введите набор числа из трёх цифр №2\n";
    std::cin >> a2 >> b2 >> c2;
    std::cout << "Числа в порядке возрастания:\n";
    std::cout << SortInc(a1, b1, c1) << "\n";
    std::cout << SortInc(a2, b2, c2) << "\n";
    return 0;
}

//3
float Power4(float x, float a, float eps){
    float result = 0, per = 1;
    int i = 1;
    while (per >= eps && i <= a){
        per *= (1 + x);
        i++;
        result += per;
    }
    return result;
}
int output3(){
    float x, a, eps;
    std::cout << "введите значения х, а, епсилон: |x| < 1, eps > 0\n";
    std::cin >> x >> a >> eps;
    std::cout << "(1 + x) ^ a ~ " << Power4(x, a, eps) << "\n";
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
int output4(){
    int a, cc, n;
    std::cout << "Введите число, систему счисления вашего числа и степень, в которую хотите возвести число\n";
    std::cin >> a >> cc >> n;
    int res = power(a, n, cc);
    std::cout << res;
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
int output5(){
    float S;
    int N;
    std::cout << "Введите кол-во элементов для подсчёта - N\n";
    std::cin >> N;
    if (N >= 1 && N < 30){
        std::cout << Summ(N);
    }else{
        std::cout << "Error\n";
    }
    return 0;
}
