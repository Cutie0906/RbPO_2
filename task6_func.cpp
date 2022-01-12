#define _USE_MATH_DEFINES
#include <cmath>
double f(double x, double y) {
	return pow((cos(x)-cos(y)),2)-pow((sin(x)-sin(y)),2);
}