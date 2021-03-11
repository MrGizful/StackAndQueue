#include "ArrayQueue.h"

ArrayQueue::ArrayQueue(int size)
{
	stack.resize(size);
	head = tail = count = 0;
}

bool ArrayQueue::empty()
{
	return count == 0;
}

void ArrayQueue::put(int data)
{
	if ((head + 1) % stack.size() != tail)
	{
		if (count == 0)
			head %= stack.size();
		else
			++head %= stack.size();

		stack[head] = data;
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
			tail %= stack.size();
		else
			++tail %= stack.size();

		return stack[tail];
	}
	else
	{
		throw std::underflow_error("Queue is underflow");
	}
}