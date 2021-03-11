#include <iostream>
#include "ArrayStack.h"
#include "ListStack.h"

#include "ArrayQueue.h"

int main()
{
    ArrayQueue test(3);

    test.put(1);
    test.put(2);
    test.put(3);

    test.get();
    test.put(4);
    test.get();
    test.get();
    test.get();
}