
template<typename T>
unique_ptr<T>::unique_ptr()
{
    _ptr=nullptr;
    std::cout<<"\n Default Ctor";
}

template<typename T>
unique_ptr<T>::~unique_ptr()
{
  delete _ptr;
  _ptr=nullptr;
  std::cout<<"\n Destructor";
}

template<typename T>
unique_ptr<T>::unique_ptr(T* ptr)
{
   _ptr = ptr;
   std::cout<<"\nCtor With Parameter";
}

template<typename T>
unique_ptr<T>& unique_ptr<T>::operator =(unique_ptr &&ptr)
{
    delete _ptr;
   _ptr = ptr._ptr;
   ptr._ptr=nullptr;
   std::cout<<"\nOperator =";
   return *this;
}

template<typename T>
T& unique_ptr<T>::operator * ()
{
  return *_ptr;
}

template<typename T>
T* unique_ptr<T>::operator -> ()
{
  return _ptr; 
}

template<typename T>
unique_ptr<T>::unique_ptr(unique_ptr && ptr)
{
    _ptr=ptr._ptr;
    ptr._ptr=nullptr;
    std::cout<<"\nMove Ctor";
}

