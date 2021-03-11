#pragma once
#include <vector>
#include <stdexcept>

class ArrayQueue
{
	std::vector<int> stack;
	int head, tail, count;

public:

	ArrayQueue(int size);

	bool empty();

	void put(int data);

	int get();
};

