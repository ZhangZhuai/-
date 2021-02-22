#include "Circle.h"
Circle::Circle() {
	radius = 1.0;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
Circle::Circle(double r) {
	radius = r;
}

