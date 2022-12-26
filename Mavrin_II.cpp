#include "Mavrin_II.h"
#include <cmath>
float getMavrin(float x)
{
	float a;
	//int x;
	x = 5;
	a = cos(x * x * x) - sin(x);
	return a;
}