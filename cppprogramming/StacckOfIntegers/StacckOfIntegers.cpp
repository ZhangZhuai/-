#include "StacckOfIntegers.h"
StackOfIntegers::StackOfIntegers()
{
	int size = 0;
	for (int& i : elements)
	{
		i = 0;
	}
}

StackOfIntegers::~StackOfIntegers()
{
}
bool StackOfIntegers::empty()
{
	return(size == 0 ? true : false);
}

int StackOfIntegers::getSize()
{
	return size;
}
int StackOfIntegers::peek()
{
	return elements[ size - 1 ];
}
int StackOfIntegers::pop()
{
	int tmp = elements[ size - 1 ];
	size--;
	elements[ size ] = 0;
	return tmp;
}

int StackOfIntegers::push(int value)
{
	elements[ size ] = value;
	size++;
	return value;
}