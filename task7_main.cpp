#include <iostream>
using namespace std;
extern double x, y, result;
extern void f();

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