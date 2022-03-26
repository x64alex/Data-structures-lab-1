#include "SetIterator.h"
#include "Set.h"
#include <stdexcept>


SetIterator::SetIterator(const Set& m) : set(m)
{
	current = 0;
    length = m.length;
}

/*
* Best Case: Theta(1)
* Worst Case: Theta(1)
* Average Case: Theta(1)
* Total case: Theta(1)
*/
void SetIterator::first() {
	current = 0;
}

/*
* Best Case: Theta(1)
* Worst Case: Theta(1)
* Average Case: Theta(1)
* Total case: Theta(1)
*/
void SetIterator::next() {
    if(current == length){
        throw std::exception();
    }
    if(current<length){
        current++;
    }

}

/*
* Best Case: Theta(1)
* Worst Case: Theta(1)
* Average Case: Theta(1)
* Total case: Theta(1)
*/
TElem SetIterator::getCurrent()
{
    if(current == length){
        throw std::exception();
    }
	return set.elements[current];
}

/*
* Best Case: Theta(1)
* Worst Case: Theta(1)
* Average Case: Theta(1)
* Total case: Theta(1)
*/
bool SetIterator::valid() const {
	return current < length;
}



