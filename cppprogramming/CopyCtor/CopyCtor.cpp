#include <iostream>
#include "Square.h"
using std::cout;
using std::cin;
using std::endl;
//2 在堆和栈上分别拷贝创建Square对象
int Square::numberOfObjects = 0;
int main() {
	Square s1{ 10.0 };
	cout << "squares:" << Square::getNumberOfObjects() << endl;

	Square s2{ s1 };
	cout << "squares:" << Square::getNumberOfObjects() << endl;

	Square* s3 = new Square{ s1 };
	cout << "squares:" << Square::getNumberOfObjects() << endl;

	cout<<"s3'area is :"<<s3->getArea() << endl;

	delete s3;
	cout << "squares:" << Square::getNumberOfObjects() << endl;

	cin.get();
	return 0;
}