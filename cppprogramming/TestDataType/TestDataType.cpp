#include<iostream>
using namespace std;

int main() {
	//列表初始化不允许窄化
	int x{ 1};//从double到int需要收缩转换；不会出现隐式类型转换
	cout << x << endl;

	cout << 1 / 2 << endl;
	cout <<static_cast<double> (1 )/ 2 << endl;//0.5
	cout << static_cast<double> (1 / 2)<< endl;//0 原因 整数除法 1/2 结果为0  强制类型转换仍为0
	cout << 1.0f/ 2.f<< endl;


	cin.get();
	return 0;

}