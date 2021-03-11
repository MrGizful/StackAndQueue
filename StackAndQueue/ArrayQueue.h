#pragma once
#include <vector>

class ArrayQueue
{
	std::vector<int> stack;
	int head, tail;

public:

	ArrayQueue(int size);

	bool empty();

	void put(int data);

	int get();
};

