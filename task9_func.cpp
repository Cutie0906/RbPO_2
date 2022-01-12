#include "kvar.h"

namespace kvar {
	double x, y,result;
	void f() {
		result = pow((cos(x)-cos(y)),2)-pow((sin(x)-sin(y)),2);
	}
}