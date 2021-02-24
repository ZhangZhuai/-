#include <iostream>
#include <cassert>
#include "StacckOfIntegers.h"
//创建Stack对象 展示入栈出栈操作
using std::cout;
using std::cin;
using std::endl;
int main() {
	StackOfIntegers s1{};
	for (int i = 0; i < 5; i++) {
		s1.push(i + 1);
	}
	cout << "Stack size=" << s1.getSize() << endl;
	cout << "Top element is " << s1.peek() << endl;
	const int size = s1.getSize();
	for (int i = 0; i < size; i++) {
		cout << s1.pop() << " ";
	}
	cout << endl;
	cout << "Now, stack is empty:" << s1.empty() << endl;
	std::cin.get();
	return 0;
}