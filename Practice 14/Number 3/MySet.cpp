#include "MySet.h"

void MySet::addElement(int element) {
    set.insert(element);
}

bool MySet::containsElement(int element) {
    if (set.empty()) {
        throw EmptySetException();
    }
    return set.count(element) > 0;
}

int MySet::getElementCount() {
    return set.size();
}
