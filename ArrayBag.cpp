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
template<class T>
bool ArrayBag<T>::remove(const T& an_entry) {
    int temp_index = getIndexOf(an_entry);
    if(temp_index>=0){
        item_count_--;
        items_[temp_index]=items_[item_count_];
        return true;
    }
    return false;
}
template<class T>
bool ArrayBag<T>::contains(const T& an_entry) const{
    if(getIndexOf(an_entry)>=0){
        return true;
    }
    return false;
}

template<class T>
int ArrayBag<T>::getIndexOf(const T& target) const{
    for(int i = 0; i<item_count_;i++){
        if(items_[i]==target){
            return i;
        }
    }
    return -1;
}