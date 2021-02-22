#include<iostream>
#include "Circle.h"
using namespace std;
int main() {
	auto* c1 = new Circle{ 1.0 };
	Circle c3{ 2.0 };
	auto c2 = &c3;
	cout <<(* c1).getArea() << endl;
	cout << c2->getArea() << endl;
	auto c5 = new Circle[3]{ 1.0, 2.0, 3.0 };
	for (int i = 0; i < 3; i++) {
		cout << c5[i].getArea() << endl;
	}
	/*
	for (auto x : c5) {
		cout << x.getArea() << endl;
	}
	*/
	delete c1;
	delete[]c5;
	c1 = c5 = nullptr;
	//delete c1;删除空指针不会带来异常

	return 0;
}