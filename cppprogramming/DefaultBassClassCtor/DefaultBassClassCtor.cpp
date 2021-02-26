#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//任务 基类默认构造函数的作用
//B:public A
class A{
public:
	//A() { cout << "A()" << endl; };
	A() = default;
	A(int i) { cout << "A(" << i << ")" << endl; };
private:

};
class B : public A{
public:
	B() { cout << "B()" << endl; };
	//隐式调用A的默认构造函数
	B(int j) : A(j) { cout << "B(" << j << ")" << endl; };
private:

};
int main() {
	A a1{ };
	A a2{ 1 };
	B b1{ };
	B b2{ 2 };
	cin.get();
	return 0;
}