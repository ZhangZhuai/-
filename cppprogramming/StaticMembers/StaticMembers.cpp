//task2 通过类名/对象名调用静态成员函数
#include <iostream>
#include "Square.h"
#include <cassert>
using std::cout;
using std::cin;
using std::endl;
int Square::numberOfObjects = 10;
int main() {
	Square s1;
	cout << s1.getNumberOfObjects() << endl;
	assert(s1.getNumberOfObjects() == 11);
	Square s2{ 20.0 };
	cout << Square::getNumberOfObjects() << endl;
	cout << s2.getNumberOfObjectsNonStatic() << endl;
	//cout << Square::getNumberOfObjectsNonStatic() << endl;非静态成员函数的非法调用
	cin.get();
	return 0;
}