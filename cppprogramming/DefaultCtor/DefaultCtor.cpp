#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Circle {
private:
	double radius{0.0};
public:
	Circle(double r) {
		radius = r;
	}
	Circle() =default;//Circle(_){};
	double getArea() {
		return 3.14 * radius * radius;
	}
};
class Square {
private:
	double side;
public:
	Square() = delete;
	Square(double side)//:side{side}{}
	{
		this->side = side;
	}
	double getArea() {
		return side * side;
	}
};
class Combo {
public:
	Circle c;
	Square s;
	Combo(): s{ 1.0 } {
		auto s={ 8.0 };
	};
};

int main() {
	Combo o;
	cout << o.c.getArea() << endl;
	return 0;
}