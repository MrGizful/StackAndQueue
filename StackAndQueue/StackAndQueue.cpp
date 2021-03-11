#include <iostream>
#include "ArrayStack.h"
#include "ListStack.h"
#include "ArrayQueue.h"
#include "ListQueue.h"

int main()
{
    ListQueue test;

    test.put(1);
    test.put(2);
    test.put(3);

    test.get();
    test.put(4);
}