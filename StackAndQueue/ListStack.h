#pragma once
#include <list>

class ListStack
{
	std::list<int> stack;

public:

	ListStack();

	bool empty();

	void push(int data);

	int pop();
};

