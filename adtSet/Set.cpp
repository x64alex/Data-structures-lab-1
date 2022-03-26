#include "Set.h"
#include "SetIterator.h"

Set::Set() {
    length = 0;
	elements = new TElem;
}

/*
* Best Case: Theta(1)
* Worst Case: Theta(n)
* Average Case: Theta(n)
* Total case: O(n)
*/
bool Set::add(TElem elem) {
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

/*
* Best Case: Theta(n)
* Worst Case: Theta(n)
* Average Case: Theta(n)
* Total case: Theta(n)
*/
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
/*
* Best Case: Theta(1)
* Worst Case: Theta(n)
* Average Case: Theta(n)
* Total case: O(n)
*/
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

/*
* Best Case: Theta(1)
* Worst Case: Theta(1)
* Average Case: Theta(1)
* Total case: Theta(1)
*/
int Set::size() const {
	return length;
}

/*
* Best Case: Theta(1)
* Worst Case: Theta(1)
* Average Case: Theta(1)
* Total case: Theta(1)
*/
bool Set::isEmpty() const {
	if(length == 0){
        return true;
    }
    return false;
}

/*
* Best Case: Theta(1)
* Worst Case: Theta(1)
* Average Case: Theta(1)
* Total case: Theta(1)
*/
Set::~Set() {
	delete elements;
}

/*
* Best Case: Theta(1)
* Worst Case: Theta(1)
* Average Case: Theta(1)
* Total case: Theta(1)
*/
SetIterator Set::iterator() const {
	return SetIterator(*this);
}


