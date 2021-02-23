#include <iostream>
#include <iostream>
#include <array>
#include <cassert>//使用assert（)断言需要包含本头文件
using std::cout;
using std::cin;
using std::endl;
//用递归计算factorial 用assert检查3的阶乘
//将factorial变成常量表达式 用static_asert检查3的阶乘
//创建factorial（4）大小的数组
constexpr int factorial(int n) {
	if (n == 0) {
		return  1;//error
	}
	else {
		return n * factorial(n - 1);
	}
}
int main() {
	/*
	int x{ 3 };
	auto f = factorial(x);
	static_assert(factorial(3) == 6, "factorial(3)shoule be 6");
	assert(f == 6);
	cout << "3!=" << f << endl;
	cin.get();
	*/
	static_assert(factorial(4) == 24, "factorial(4)shoule be 24");
	std::array<int, factorial(4)> a;//constexpr 是编译时已知的常量 可以用来定义数组
	cout << a.size();
	return 0;
}