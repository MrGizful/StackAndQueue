#pragma once
#include <vector>

class ArrayStack
{
	std::vector<int> stack;
	int size, count;

public:

	ArrayStack(int size);

	bool empty();

	void push(int data);

	int pop();
};

