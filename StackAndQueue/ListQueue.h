#pragma once
#include <list>

class ListQueue
{
	std::list<int> queue;

public:

	ListQueue();

	bool empty();

	void put(int data);

	int get();
};

