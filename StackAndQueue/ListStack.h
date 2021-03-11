#pragma once
#include <list>

//Worst and average time complexity
//Access and search - O(n), insertion and delition - O(1)
//Worst space complexity - O(n)

class ListStack
{
	std::list<int> stack;

public:

	ListStack();

	bool empty();

	void push(int data);

	int pop();
};

