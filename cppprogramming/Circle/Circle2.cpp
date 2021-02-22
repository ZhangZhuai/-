#include "Circle.h"
Circle::Circle() {
	radius = 1.0;
}
double Circle::getArea() {
	return 3.14*radius * radius;
}
Circle::Circle(double r) {
	radius = r;

}
double Circle::getRadius() {
	//radiu=1.0;const means no change to variable radius
	return radius;
}
void Circle::setRadius(double r) {
	this->radius = r;
}
