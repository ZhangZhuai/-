#include <iostream>
#include "Date.h"
#include "Employee.h"
//task 4 创建Employee对象并修改其生日
using std::cout;
using std::cin;
using std::endl;

int main() {
	Employee e;
	//1.setter
	e.setBirthday(Date(1999, 1, 1));
	cout << e.toString() << endl;
	//2.getter
	e.getDate()->setYear(1999);
	cout << e.toString() << endl;
	cin.get();
	return 0;
}