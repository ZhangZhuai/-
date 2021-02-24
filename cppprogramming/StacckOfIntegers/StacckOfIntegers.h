#pragma once
/*
编写StackOfIntegers类
-elements: int[100]         //存放栈元素的数组
-size: int                  //栈内元素数量
+StackOfIntegers()          //空栈的构造函数
+empty(): bool              //判栈空否
+peek(): int                //读取栈顶元素而不移除
+push(value: int): int      //将一个数据压栈
+pop(): int                 //弹出一个数据
+getSize(): int             //回栈内元素数量
*/
class StackOfIntegers
{
public:
	StackOfIntegers();
	~StackOfIntegers();
	bool empty();
	int peek();
	int push(int value);
	int pop();
	int getSize();
private:
	int elements[100]{0};
	int size = 0;

};

