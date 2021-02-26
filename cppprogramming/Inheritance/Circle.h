#pragma once
#include "Shape.h"
class Circle : public Shape {
	double radius;
public:
	Circle();
	Circle(double r, Color color_, bool filled_);
	double getRadius();
	double getArea();
	void setRadius(double r);
};