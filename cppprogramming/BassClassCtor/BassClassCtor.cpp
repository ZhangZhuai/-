#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//1  继承构造函数
//   创建基类B及构造函数B(int) B(char)和派生类D；D不继承/继承ctor的效果

//2  派生类中调用基类构造函数
//   D中增加double x;及D(double) 在D（double）初始化列表调用B（i）并初始化x

//3  派生类先调用基类ctor 再构造内嵌对象
//   增加类E 及E（int） 并在D中加入E的两个对象；创建D对象 观察E ctor和B ctor次序
class B
{
public:
	B() { cout << "B()" << endl; };
	B(int i) { cout << "B(" << i << ")" << endl; };
	B(char c) { cout << "B(" << c << ")" << endl; };
private:

};

class E {
public:
	E() {
		cout << "E()" << endl;
	}
};
class D : public B {
public:
	using B::B;
	//D():B(){}
	//D(int i):B(inti){}
	//D(char c){}
	D(){}
	//有含参构造函数 必须显式声明默认构造函数
	D(double x) : e1{}, e2{}, B(static_cast<int>(x)) { cout << "D(" << x << ")" << endl; }


private:
	E e1, e2;
};


int main() {
	B b;
	D d;
	D d2{ 3.03 };
	return 0;
}