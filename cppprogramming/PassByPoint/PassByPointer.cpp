#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;
}
int main() {
	int a = 1, b = 4;
	cout << "Before " << endl;
	cout << a << b << endl;
	swap(&a, &b);
	cout << "After " << endl;
	cout << a << b << endl;

	cin.get();
	return 0;
}
//xy为整型指针变量 调用swap函数后 xy分别指向ab所在地址  值为两者的地址
//操作的不是形参的值 xy  而是改变 xy解引用的值