#include "ListQueue.h"

ListQueue::ListQueue()
{
	queue.resize(0);
}

bool ListQueue::empty()
{
	return queue.size() == 0;
}

void ListQueue::put(int data)
{
	queue.push_front(data);
}

int ListQueue::get()
{
	int value = queue.back();
	queue.pop_back();

	return value;
}