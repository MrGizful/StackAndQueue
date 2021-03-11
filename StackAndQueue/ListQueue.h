#pragma once
#include <list>

class ListQueue
{
	std::list<int> queue;

public:

	bool empty();

	void put(int data);

	int get();
};

