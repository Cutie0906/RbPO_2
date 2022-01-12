#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
double f(double x, double y) {
    return pow((cos(x)-cos(y)),2)-pow((sin(x)-sin(y)),2);
}
int main() {
    double x;
	double y;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
		cout << "Enter y: ";
        cin >> y;
        printf("f: %.4f\n", f(x,y));
    }
    return 0;
}