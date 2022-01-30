#ifndef UNIQUE_PTR_H
#define UNIQUE_PTR_H

template <typename T>
class unique_ptr
{
public:
    unique_ptr();
    unique_ptr(T* ptr);
    ~unique_ptr();
    unique_ptr(unique_ptr && ptr);
public:
    unique_ptr& operator=( unique_ptr&& ptr);
    T& operator * ();
    T* operator -> ();    
private:    
    unique_ptr(const unique_ptr&) = delete;
    unique_ptr& operator=(const unique_ptr&) = delete;
private:
    T* _ptr;
};

#include "unique_ptr.hpp"
#endif