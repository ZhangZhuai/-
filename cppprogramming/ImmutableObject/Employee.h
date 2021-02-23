#pragma once
//task2 定义Gender枚举类型
//task3 定义Employee类
#include <iostream>
#include <string>
#include "Date.h"
enum class Gender {
	male   ,
    female ,
};
class Employee {
private:
	std::string name;
	Gender gender;
	Date birthday;
public:
	void setName(std::string name) { this->name = name; };
	void setGender(Gender gender) { this->gender = gender; };
	void setBirthday(Date birthday) { this->birthday = birthday; };
	std::string getName() { return name; };
	Gender gerGender() { return gender; };
	Date* getDate() { return &birthday; };
	//返回指向birthday的指针
	std::string toString() {
		return (name + (gender == Gender::male ? std::string("male") : std::string("female")) +
			birthday.toString());
	}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }, birthday{ birthday } {};
	Employee() :Employee("zz", Gender::male, Date(2019, 1, 1)) {};
	//委托构造函数 将默认构造函数放在先初始化成员类的地方 不能缺少大括号 因为仍然是构造函数
};