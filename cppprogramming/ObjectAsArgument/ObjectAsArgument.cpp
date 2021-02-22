#include <iostream>
#include "Circle2.h"
using namespace std;
/*
void print(Circle c) {
	cout << c.getArea() << endl;
}
ambiguous； litter higher performance
*/
void print(Circle& c) {
	cout << c.getArea() << endl;
}
void print(Circle* c) {
	cout << c->getArea() << endl;
	//对象指针 解引用或者箭头运算符
}



int main() {
	Circle ca[]{ 1.0,2.0,3.0 };
	print(ca[1]);
	print(ca[2]);
	print(ca+2);
	return 0;

}