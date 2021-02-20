#include<iostream>
using namespace std;
class Circle {
public:
	double radius;
	Circle() {
		radius = 1.0;
	}
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
		//类里已经有radius成员变量可直接使用
	}
};

int main() {
	Circle c1;
	Circle c2 { 2.0 };
	//cpp11强烈推荐使用列表初始化 窄化检测
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	return 0;
}
//类名首字母大写
