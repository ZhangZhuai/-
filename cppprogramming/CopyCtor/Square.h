#pragma once
//1 添加 拷贝构造函数 析构函数 添加输出信息
#include <iostream>
using std::cout;
using std::endl;
class Square {
private:
	double side{ 1.0 };
	static int numberOfObjects;

public:
	Square(double side) {
		this->side = side;
		numberOfObjects++;
	}

	Square() :Square(1.0) {};

	Square(const Square& s) {
		this->side = s.side;
		numberOfObjects++;
		cout << "Square(const Square& s) is invoked" << endl;
	}

	~Square()
	{
		numberOfObjects--;
	}

	double getArea() { return side * side; };

	static int getNumberOfObjects() { return numberOfObjects; };

	int getNumberOfObjectsNonStatic() { return numberOfObjects; };

	double getSide() { return side; };

	void setSide(double side) { this->side = side; };
};