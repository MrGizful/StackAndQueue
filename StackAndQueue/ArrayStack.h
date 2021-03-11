#pragma once
#include <vector>

//Worst and average time complexity
//Access and search - O(n), insertion and delition - O(1)
//Worst space complexity - O(n)

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

