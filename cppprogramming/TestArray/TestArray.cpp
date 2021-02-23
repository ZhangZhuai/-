#include <iostream>
#include <array>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::array;
void print(array<int, 3>& a) {
	//print(array& a)缺少类模板的参数列表！！！
	for (auto x : a) {
		cout << x << " " ;
	}
	cout << endl;
}
int search(array<int, 3>& a, int token) {
	bool exist{ false };
	int i = 0;
	for (auto element : a) {
		if (element == token) {
			exist = true;
			break;
		}
		i++;
	}
	if(exist)
		return i;
	else
		return -1;
}
int main() {
	//创建数组
	array a1{ 1,2,3 };//cpp17 cpp14 array<int,3>
	print(a1);
	//为数组赋值
	a1 = { 7,8,9 };
	print(a1);
	//交换数组
	array b1 = { 400,200,300 };
	print(b1);
	a1.swap(b1);
	print(a1);
	print(b1);
	//求数组大小
	cout << a1.max_size()<< endl;
	cout << a1.size() << endl;
	//编写search函数 在数组中查找一个值
	cout << "search 300:" << search(a1, 300)<<endl;
	cout << "search 1:" << search(a1, 1)<<endl;
	//sort
	std::sort(a1.begin(), a1.end());
	print(a1);
	//二维数组
	array<array<int,3>, 4>a8;
	cout<<(int*)&a8;
	return 0;
}