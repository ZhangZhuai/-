#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle() = default;

	Rectangle(double w, double h, Color color_, bool filled_);

	double getWidth()const;
	//const 不修改类的私有属性 放在函数参数括号后面 后接函数体
	void  setWidth(double w);
	double getHeight()const;
	void  setHeight(double h);

	double getArea()const;

private:
	double width{ 1.0 };
	double height{ 1.0 };


};
