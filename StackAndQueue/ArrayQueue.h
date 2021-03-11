#pragma once
#include <vector>
#include <stdexcept>

//Worst and average time complexity
//Access and search - O(n), insertion and delition - O(1)
//Worst space complexity - O(n)

class ArrayQueue
{
	std::vector<int> queue;
	int head, tail, count;

public:

	ArrayQueue(int size);

	bool empty();

	void put(int data);

	int get();
};

