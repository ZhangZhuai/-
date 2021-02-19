#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
//模板类型
template<typename T>
auto max (T x , T y){
	return x > y ? x : y;
}
/*
auto max(double a, double b) {
	return a > b ? a : b;
}
*/
auto max(int a, int b, int c) {
	return max(a, max(b, c));
}

auto max(double a, double b, double c ) {
	return max(a, max(b, c));
}
int i{ 100 };
int main() {
	//Variable Scope
	//int i{ 100 };不是全局静态变量
	/*
	for (int i = 0; i < 5; i++) {
		cout << i << " ";
	//cpp11 std::to_string()
		cout << std::to_string(i) + "##";
		cout << endl << ::i << endl;
	}
	*/
	//Overloading Functions
	cout << max(1, 2, 3)<<endl;
	cout << max('a', 'B', 'h')<<endl;
	cout << max('a', 'B') << endl;
	//模板类型 输出char 非模板类型则输出asiic码

	//Default Agreement


	cin.get();
	return 0;
}