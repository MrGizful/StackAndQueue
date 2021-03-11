#pragma once
#include <list>

//Worst and average time complexity
//Access and search - O(n), insertion and delition - O(1)
//Worst space complexity - O(n)

class ListQueue
{
	std::list<int> queue;

public:

	ListQueue();

	bool empty();

	void put(int data);

	int get();
};

