#include <iostream>
using namespace std;
double f(double, double);
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