#define _USE_MATH_DEFINES
#include "func.h"
double x, y, result;
void f() {
	result = pow((cos(x)-cos(y)),2)-pow((sin(x)-sin(y)),2);
}