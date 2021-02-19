#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
	const int x = 43;//声明同时初始化；常量不可变
	int y = 2;
	const int* p = &x;
	//(*p) = 33;不能给常量赋值即常量指针所指向的数据不可变
	const int* q = &y;
	//(*q) = 22;
	int* const r = &y;
	int z = 5;
	*r = 2;
	//指针常量不可变 r = 5;
	cout << *r << " " << y << endl;
	//常指针常量
	const int*  const s = &y;


	const char* str = "Hello";
	//*str = 'p';
	auto p1 = &y;
	auto p2 = "World";
	auto const p3 ="!";
	cin.get();
	return 0;
}