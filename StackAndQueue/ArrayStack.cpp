#include "ArrayStack.h"

ArrayStack::ArrayStack(int size)
{
	this->size = size;
	count = 0;
	stack.resize(size);
}

bool ArrayStack::empty()
{
	return count == 0;
}

void ArrayStack::push(int data)
{
	stack[count++] = data;
}

int ArrayStack::pop()
{
	return stack[--count];
}