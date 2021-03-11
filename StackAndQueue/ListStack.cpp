#include "ListStack.h"

ListStack::ListStack()
{
	stack.resize(0);
}

bool ListStack::empty()
{
	return stack.empty();
}

void ListStack::push(int data)
{
	stack.push_front(data);
}

int ListStack::pop()
{
	int value = stack.front();
	stack.pop_front();

	return value;
}