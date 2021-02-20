#include<iostream>
using namespace std;
int main() {
	cout << "请输入课程成绩：";
	int score = 0;
	cin >> score;
	switch (int x = score / 10) {
	    case 10:
		case 9:
			cout << "你的五分制成绩是A\n";
			break;
		case 8:
			cout << "你的五分制成绩是B\n";
			break;
		case 7:
			cout << "你的五分制成绩是C\n";
			break;
		case 6:
			cout << "你的五分制成绩是D\n";
			break;
		default:
			cout << "你的五分制成绩是E\n";
	}

	return 0;
 }
