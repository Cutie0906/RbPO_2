#define _USE_MATH_DEFINES
#include <cmath>
double x;
double y;
double result;
void f() {
	
	result = pow((cos(x)-cos(y)),2)-pow((sin(x)-sin(y)),2);
}