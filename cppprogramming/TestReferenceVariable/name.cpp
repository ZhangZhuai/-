#include <iostream>
using namespace std;
int main() {
	int x = 0;
	int y{ 10 };
	int& rx = x;
	rx = 8;
	const char* s = "Hello";
	const char* t = "World";
	//char* r = "Hello";
	const char*& r = s;
	r = t;//s = t;world字符串首地址放在s里面
	cout << r << s << endl;
	cin.get();
	return 0;
}//vs光标变成方块  按insert 键
