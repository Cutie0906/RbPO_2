#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
	double y;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
		cout << "Enter y: ";
        cin >> y;
        result = pow((cos(x)-cos(y)), 2)-pow((sin(x)-sin(y)), 2);
        printf("result: %.4f\n", result);
    }
    return 0;
}