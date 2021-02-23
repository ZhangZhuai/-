#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using std::cout;
using std::cin;
using std::endl;
//1 增加静态成员，计算雇员对象的数量
//2 将雇员的生日改为Date* 类型的指针
//3 修改构造函数和析构函数
enum class Gender {
	male,
	female,
};
class Employee {
private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfObjects;
public:
	void setName(std::string name) { this->name = name; };
	void setGender(Gender gender) { this->gender = gender; };
	void setBirthday(Date birthday) { (*this->birthday) = birthday; };
	//this->birthday = &birthday;
	std::string getName() { return name; };
	Gender gerGender() { return gender; };
	Date getDate() { return *birthday; };//birthday 为指针 Date*指针加上解引用返回Date类型
	//返回指向birthday的指针
	std::string toString() {
		return (name + (gender == Gender::male ? std::string("male") : std::string("female")) +
			birthday->toString());//->结构体指针变量所指成员
	}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }{
		numberOfObjects++;
		this->birthday=new Date{ birthday };
		cout << "Now,there are " << numberOfObjects << " employees" << endl;
	};
	Employee() :Employee("zz", Gender::male, Date(2019, 1, 1)) {};

	//委托构造函数 将默认构造函数放在先初始化成员类的地方 不能缺少大括号 因为仍然是构造函数
	~Employee()
	{
		numberOfObjects--;
		delete birthday;
		birthday = nullptr;
		cout << "Now,there are" << numberOfObjects << "employees" << endl;
	}




};