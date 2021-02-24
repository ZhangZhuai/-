#include "Date.h"
using std::cout;
using std::endl;
int Date::getYear() {
	return year;
};
int Date::getMonth() {
	return month;
};
int Date::getDay() {
	return day;
};
void Date::setYear(int y) {
	year = y;
};
void Date::setMonth(int m) {
	month = m;
};
void Date::setDay(int d) {
	day = d;
};
Date::Date() = default;
Date::Date(int y, int m, int d) :year{ y }, month{ m }, day{ d }{
	cout << "Date:" << toString() << endl;
};
//toString 也是类中public函数 故将定义和声明分开是 toString也需要加上std::
std::string Date::toString() {
	return(std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day));
}