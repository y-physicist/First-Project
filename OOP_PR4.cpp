//
// Created by vau1i on 12.03.2022.
//
#include <cmath>
#include "OOP_PR4.h"
using namespace std;
double GroupN(double a, double b) {
    double n;
    if (a >= b)
        n = cbrt(a-b);
    else
        n = a * a + (a - b) / sin(a * b);

    return n;
}

double GroupM(double a, double b, double n) {
    double m = 0;
    if (n < b) {
        m = (n + a) / (-b) + sqrt(sin(a) * sin(a) - cos(n));
    }
    else if (n == b) {
        m = b * b + tan(n * a);
    }
    else {
        m = b * b * b + n * a * a;
    }

    return m;
}