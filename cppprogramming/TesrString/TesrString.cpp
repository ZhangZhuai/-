#include <iostream>
#include <string>

using namespace std;
int main() {
	//创建字符串
	string s{ "Hello" };
	//clear
	s.clear();
	//用数组为字符串赋值
	char arr[]{ 'W','o','r','l','d','\0' };//不加\0会出现提示添加字符串零终止符
	s += arr;//运算符重载
	//assign
	s.assign("Hello,World!");
	//append
	s.append(" ");
	s.append(5,'\t');
	//s.append("!");
	cout << s << endl;
	//insert 空白
	s.insert(0, "  ");
	cout << s << endl;
	//移除字符串前面的空白
	s.erase(0, s.find_first_not_of(" \t\n\r"));
	s.erase( s.find_last_not_of(" \t\n\r")+1);
	//将字符串转化为整数或者浮点数
	s += "$";
	s.assign("1024");
	int x = stoi(s);
	cout << s << endl;
	cout << "x=" << x << endl;
	string s2 = to_string(x);
	cout << "s2:" << s2 << endl;
	cout << s << endl;
	return 0;
}