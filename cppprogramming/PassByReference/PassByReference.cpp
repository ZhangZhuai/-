#include <iostream>
using namespace std;

void swap(int& x, int& y) {
	int t = 0;
	t = x;
	x = y;
	y = t;
}
int main() {
	int a = 1, b = 4;
	cout << "Before " << endl;
	cout << a << b << endl;
	swap(a, b);//引用是某变量的别名  可以直接使用ab 函数调用时  实现实参与形参的绑定
	cout << "After " << endl;
	cout << a << b << endl;

	cin.get();
	return 0;
}