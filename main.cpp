#include <iostream>
#include "OOP_PR4.h"

using namespace std;

int main() {
    double a = 4.8, b = -7.9, n = 0, m = 0;

    n = GroupN(a, b);
    m = GroupM(a, b, n);

    cout << "Start numbers: a = " << a << ", b = " << b << endl;
    cout << "End numbers: n = " << n << ", m = " << m << endl;
}
