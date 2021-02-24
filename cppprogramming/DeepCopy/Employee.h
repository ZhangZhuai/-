#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using std::cout;
using std::cin;
using std::endl;
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
	void setName(std::string name) ;
	void setGender(Gender gender) ;
	void setBirthday(Date birthday) ;
	//this->birthday = &birthday;
	std::string getName() ;
	Gender gerGender() ;
	Date getDate() ;
	std::string toString() ;
	Employee(std::string name, Gender gender, Date birthday) ;
	Employee() ;
	Employee(const Employee& e);
	~Employee();

};