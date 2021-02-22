#include<iostream>
#include "Circle.h"
//#include"Circle.cpp"
/*
Circle::Circle() {
	radius = 1.0;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
Circle::Circle(double r) {
	radius = r;
}
*/
using namespace std;
int main() {
	Circle c1;
	Circle c2{ 2.0 };
	//cpp11强烈推荐使用列表初始化 窄化检测
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	return 0;
}
//类处理和类申明可以分离
//预处理指令保证头文件只被包含或者编译一次  ：macro pragma（cpp11运算符 ）vs 不支持