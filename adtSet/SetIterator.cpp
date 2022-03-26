#include "SetIterator.h"
#include "Set.h"
#include <stdexcept>
#include <iostream>


SetIterator::SetIterator(const Set& m) : set(m)
{
	current = 0;
    length = m.length;
}


void SetIterator::first() {
	current = 0;
}


void SetIterator::next() {
    if(current == length){
        throw std::exception();
    }
    if(current<length){
        current++;
    }

}


TElem SetIterator::getCurrent()
{
    if(current == length){
        throw std::exception();
    }
	return set.elements[current];
}

bool SetIterator::valid() const {
	return current < length;
}



