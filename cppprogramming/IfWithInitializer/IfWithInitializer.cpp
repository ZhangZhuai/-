#include <iostream>
#include<cstdlib>
using namespace std;


int main() {
	cout << "正在生成0-100之间的整数...\n";
	cout << "请输入你猜测的整数：";
	auto x{ 0 };
	cin >> x;
	//rand() <cstdlib>
	if (int z = rand() % 100; x > z) {
		cout << "你猜大了，我的数据是" << z << endl;
	}
	else if(x<z){
		cout << "你猜小了，我的数据是" << z << endl;
	}
	else {
		cout << "你猜对了"  << endl;
	}




	return 0;
}