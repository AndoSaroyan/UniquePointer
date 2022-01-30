#include <iostream>
#include "unique_ptr.h"

int main ()
{
    int* pt= new int;
    unique_ptr<int> A(pt);
    unique_ptr<int> B;
    B=std::move(A);

    return 0;
}