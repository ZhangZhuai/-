#include <iostream>
#include "Circle3.h"
using  std::cout;
using  std::cin;
using  std::endl;
int main() {
	Circle c { 1.0 };
	cout << c.setRadius(2.0)
		     .setRadius(3.0)
		     .getArea() << endl;
	//3.0 c is 2.0
	//c.setRadius(2.0) return anonymous object
	//.setRadius(3.0) changes anonymous object instead of changing c

	return 0;
}