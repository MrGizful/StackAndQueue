#include "ArrayQueue.h"

ArrayQueue::ArrayQueue(int size)
{
	queue.resize(size);
	head = tail = count = 0;
}

bool ArrayQueue::empty()
{
	return count == 0;
}

void ArrayQueue::put(int data)
{
	if ((head + 1) % queue.size() != tail)
	{
		if (count == 0)
			head %= queue.size();
		else
			++head %= queue.size();

		queue[head] = data;
		count++;
	}
	else
	{
		throw std::overflow_error("Queue is overflow");
	}
}

int ArrayQueue::get()
{
	if (count != 0)
	{
		if (--count == 0)
			tail %= queue.size();
		else
			++tail %= queue.size();

		return queue[tail];
	}
	else
	{
		throw std::underflow_error("Queue is underflow");
	}
}