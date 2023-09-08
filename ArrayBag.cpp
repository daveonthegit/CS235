#include "Array_Bag.hpp"

template<class T> 
ArrayBag<T>::ArrayBag(): item_count_(0)
{

}

template<class T>
int ArrayBag<T>::getCurrentSize() const{
    return item_count_;
}

template<class T>
bool ArrayBag<T>::isEmpty() const{
    return item_count_==0;
}

template<class T>
bool ArrayBag<T>::add(const T& new_entry){
    if(item_count_<DEFAULT_CAPACITY{
        items_[item_count_] = new_entry;
        item_count_++;
        return true;
    }
    return false;
}
