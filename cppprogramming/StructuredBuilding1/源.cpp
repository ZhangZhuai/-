#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int a[]{ 1, 2, 3 };
	auto [e1, e2, e3] = a;
	cout << e1 << " " << e2 << " " << e3 << endl;
	auto const [f1, f2, f3] {a};
	//f1 = 10;不能给常量赋值
	auto &[g1, g2, g3] {a};
	cout << g1 << " " << g2 << " " << g3 << endl;
	g1 = 10;
	cout << g1 << " " << g2 << " " << g3 << endl;
	cout << "is a[0] changed?" << a[0] << endl;
	std::array b{ 1, 2, 3, };
	std::array<int, 2> c{ 11, 12 };
	auto [h1, h2, h3] = a;
	cout << h1 << " " << h2 << " " << h3 << endl;
	return 0;

}