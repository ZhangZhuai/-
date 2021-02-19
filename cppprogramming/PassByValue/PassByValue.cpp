#include <iostream>
using namespace std;

void swap(int x, int y) {
	int t = 0;
	t = x;
	x = y;
	y = t;
}
int main() {
	int a = 1, b = 4;
	cout << "Before "<< endl;
	cout << a << b << endl;
	swap(a, b);
	cout << "After "<< endl;
	cout << a << b << endl;

	cin.get();
	return 0;
}//swap只影响到形参xy值 实参ab地址与值皆没有变化
//调用函数后 进行了形参与实参的绑定