#include<iostream>
#ifndef LINKED_LIST
#include "linkedList.cpp"
#endif

int main (void) {
    linkedList::chint hello{.word="Hello, World!"};
    linkedList::chint middle{.word="In the middle."};
    linkedList::chint bye{.word="Goodbye!"};
    linkedList::list first;
    first.addItem(&hello);
    first.addItem(&middle);
    first.addItem(&bye);
    std::cout << first.accessHeadValPtr()->word << std::endl;
    std::cout << first.accessIndexValPtr(5)->word << std::endl;
    std::cout << first.accessTailValPtr()->word << std::endl;
    return 0;
}