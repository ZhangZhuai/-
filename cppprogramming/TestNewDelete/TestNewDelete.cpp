#include <iostream>
using namespace std;

int main() {
	int* p = nullptr;
	int* q{ nullptr };//cpp11 初始化列表
	p = new int(42);
	q = new int[4];
	cout <<"before"<< *p << endl;
	*p = 24;
	cout <<"after"<< *p << endl;
	for (int i = 0; i < 4; i++) {
		*(q + i) = 10 + i;
		cout <<* (q+i) << endl;//*是解引用操作 q保存的是数组的首地址 *（q+i）=q【i】
	}
	delete p;
	delete[]q;


	cin.get();
	return 0;


}//列表初始化 list initialization见ppt
