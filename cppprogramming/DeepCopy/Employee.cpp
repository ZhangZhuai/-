#include <iostream>
#include <string>
#include "Date.h"
#include "Employee.h"
using std::cout;
using std::cin;
using std::endl;
void Employee::setName(std::string name) {
	 this->name = name;
};
void Employee::setGender(Gender gender) {
	 this->gender = gender;
};
void Employee::setBirthday(Date birthday) {
	(*this->birthday) = birthday;
};
std::string Employee::getName() {
	 return name; };
Gender Employee::gerGender() {
	 return gender;
};
Date Employee::getDate() {
	 return *birthday;
};

std::string Employee::toString() {
	return (name +
		(gender == Gender::male ? std::string("male") : std::string("female")) +
		birthday->toString());
}
Employee::Employee(std::string name, Gender gender, Date birthday) :
	name{ name }, gender{ gender }{
	numberOfObjects++;
	this->birthday = new Date{ birthday };
	cout << "Now,there are " << numberOfObjects << " employees" << endl;
};
Employee::Employee() :Employee("zz", Gender::male, Date(2019, 1, 1)) {
	//empty
};//默认参数构造函数
Employee::Employee(const Employee& e) {
	this->birthday = new Date{ *(e.birthday) };
	this->gender = e.gender;
	this->name = e.name;
	numberOfObjects++;
};
//深拷贝构造函数
Employee::~Employee()
{
	numberOfObjects--;
	delete birthday;
	birthday = nullptr;
	cout << "Now,there are" << numberOfObjects << "employees" << endl;
}