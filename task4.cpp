#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void f(const double&, double&, double&);
int main() {
    double x;
	double y;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
		cout << "Enter y: ";
        cin >> y;
        f(x, y, result);
        printf("f: %.4f\n", result);
    }
    return 0;
}
void f(const double& x, double& y, double& result) {
    result = pow((cos(x)-cos(y)),2)-pow((sin(x)-sin(y)),2);
}