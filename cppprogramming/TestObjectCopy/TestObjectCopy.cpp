#include<iostream>
using namespace std;
class Square {
private:
	double side{ 1.0 };
public:
	Square() = default;//cpp11强制编译生成一个默认ctor
	Square(double side) {
		this->side = side;
	}
	double getArea() {
		return side * side;
	}
};

int main() {
	Square s1, s2{ 4.0 };
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;
	s1 = s2;

	cout << s1.getArea() << endl;

	cout << s2.getArea() << endl;


}