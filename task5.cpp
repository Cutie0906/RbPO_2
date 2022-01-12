#include <iostream>
#include <cmath>
using namespace std;
double x;
double y;
double result;
void f();
int main() {
	while (true) {
		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		f();
		printf("f: %.4f\n", result);
	}
	return 0;
}
void f() {
	result = pow((cos(x)-cos(y)),2)-pow((sin(x)-sin(y)),2);
}