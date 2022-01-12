#define _USE_MATH_DEFINES
#include "kvar.h"
using namespace std;
int main() {
    while (true) {
        cout << "Enter x: ";
        cin >> kvar::x;
		cout << "Enter y: ";
        cin >> kvar::y;
        kvar::f();
        printf("f: %.4f\n", kvar::result);
    }
    return 0;
}