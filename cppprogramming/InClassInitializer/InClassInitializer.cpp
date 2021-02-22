#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class X {
	int a = 1;
	int b = { 2 };
	int c{ 3 };
	//int c(3)
	string s{ 'H', 'e', 'l' };
	string s2{ "Hello" };
	string s3 = "World";

	int arr1[3] = { 1, 2, 3 };
	int arr2[4]{ 1 };
	double arr3[2]{ 12.0, 32.0 };
	//auto arr4[4]{ 1,2 };
};
int main() {


	return 0;
}