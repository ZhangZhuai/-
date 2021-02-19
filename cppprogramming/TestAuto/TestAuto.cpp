#include<iostream>
#include<typeinfo>
using std::cout;
using std::endl;
using std::cin;
auto max(int x, int y) {
	return x > y ? x: y;
}
int main() {
	//一行同一类
	//auto 必须在定义时初始化
	//若初始化表达式是引用或const 则 去除引用或者const定义
	int y1{ 42 }, & y2{ y1 };
	auto y3 = y2;
	cout << typeid(y3).name() << endl;
    //若初始化表达式含& 则不去除引用或者const定义
	auto& y4 = y2;
	cout << typeid(y4).name() << endl;//使用断点进行调试  程序无法显示 int&  y2 y4均为y1的别名
	//初始化表达式为数组时 auto关键字推导类型为指针
	int p[3]{ 1,2,3 };
	auto p1 = p;
	cout << typeid(p1).name() << endl;
	//初始化表达式为数组且有&时 auto关键字推导类型为数组
	auto& p2 = p;
	cout << typeid(p2).name() << endl;
	//cpp12 auto可以作为函数返回值类型和参数类型
	int x1{ 22 }, x2{ 33 };
	cout << max(x1, x2) << endl;
	return 0;
}//尽量使用 auto 保证在声明变量时即初始化
 //decltype主要用于泛型编程中