#pragma once
class Rectangle
{
public:
	Rectangle();
	~Rectangle();
	int peek() {
		return elements[size];
	}
private:
	int elements[100]{ 0 };
	int size = 0;
};

Rectangle::Rectangle()
{
	int size = 0;
	for (int& i : elements) {
		i = 1;
	}
}

Rectangle::~Rectangle()
{
}