#include "Task6.h"
#include <iostream>
#include <cmath>
using namespace std;

int NOD(int a, int b){
    while (b){
        int vrem = a % b;
        a = b;
        b = vrem;
    }
    return (abs(a));
}
void SOKR(int& chisl, int& znam){
    int div = NOD(chisl, znam);
    chisl /= div;
    znam /= div;
}
void MULT(int chisl1, int znam1, int chisl2, int znam2, int& res_chisl, int& res_znam){
    res_chisl = chisl1 * chisl2;
    res_znam = znam1 * znam2;
    SOKR(res_chisl, res_znam); 
}
void DIV(int chisl1, int znam1, int chisl2, int znam2, int& res_chisl, int& res_znam){
    MULT(chisl1, znam1, znam2, chisl2, res_chisl, res_znam);
}
