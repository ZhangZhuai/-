#include <iostream>
//using namespace std;
using std::cout;
using std::endl;//名字空间

int main() {
	return 0;
}
namespace MyAloha{
   int main() {//This is main function
	cout << "Aloha,world!" << endl;//end line

	//保持输入窗口
	std::cin.get();
	return 0;
    }
}//名字空间作用 隔离标识符作用范围