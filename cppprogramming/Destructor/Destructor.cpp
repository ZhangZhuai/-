#include <iostream>
#include "Date.h"
#include "Employee.h"
using std::cout;
using std::cin;
using std::endl;
//4 在堆和栈（函数作用域和内嵌作用域）上分别创建Employee对象 观察析构函数的行为
int Employee::numberOfObjects=0;
//编码风格 静态成员定义时明确静态成员初始值
int main() {
	Employee e1;
	cout << e1.toString() << endl;
	Employee* e2 = new Employee("Jhon", Gender::male, Date(1999, 3, 2));
	cout << e2->toString() << endl;
	{
		Employee e3("Alice", Gender::female, Date(1998, 1, 1));
		cout << e3.toString() << endl;
	}//e3大括号结束后销毁



	cin.get();
	return 0;
}