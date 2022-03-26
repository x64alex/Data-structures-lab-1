#include "Set.h"
#include "SetIterator.h"

Set::Set() {
    length = 0;
	elements = new TElem;
}


bool Set::add(TElem elem) {
    /*
     * The complexity is O(n) because in the worst case we go n steps and add the element and return true
     * and in the best case return false after 1 step(if the first element is the el we tried to add).
     */
	for(int i=0;i<length;i++)
    {
        if(elements[i] == elem)
        {
            return false;
        }
    }
    elements[length] = elem;
    length++;
	return true;
}


bool Set::remove(TElem elem) {
    for(int i=0;i<length;i++)
    {
        if(elements[i] == elem)
        {
            for(int j=i;j<length-1;j++){
                elements[j] = elements[j+1];
            }
            length--;
            return true;
        }
    }
	return false;
}

bool Set::search(TElem elem) const {
    for(int i=0;i<length;i++)
    {
        if(elements[i] == elem)
        {
            return true;
        }
    }
	return false;
}


int Set::size() const {
	return length;
}


bool Set::isEmpty() const {
	if(length == 0){
        return true;
    }
    return false;
}


Set::~Set() {
	delete elements;
}


SetIterator Set::iterator() const {
	return SetIterator(*this);
}


