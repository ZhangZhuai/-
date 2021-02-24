#include <iostream>
#include <string>
#include "Date.h"
#include "Employee.h"
using std::cout;
using std::cin;
using std::endl;
//1 构造Employee对象e1 拷贝构造e2
//2 调试模式观察e1 e2的birthday成员
//3 添加拷贝构造函数实现深拷贝
//4 调试模式观察e1 e2的birthday成员
int Employee::numberOfObjects = 0;
int main() {
	Employee e1{ "Alex",Gender::male,{1998,5,1} };
	Employee e2{ e1 };
	cout << e1.toString() << endl;
	cout << e2.toString() << endl;
	cin.get();
	return 0;
}