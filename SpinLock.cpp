#include "SpinlLock.h"

void SpinLock::SetValue(int n)
{
    while (locked)
        ;
    this->locked = true;
    this->value = n;
    this->locked = false;
}
