#ifndef ARRAY_BAG_H_
#define ARRAY_BAG_H

template<class T>
class ArrayBag
{
    public:
        ArrayBag();
        int getCurrentSize() const;
        bool isImply() const;
        bool add(const T& new_entry);
        bool remove(const T& an_entry);
        void clear();
        bool contains(const T& an_entry) const;
        int getFrequencyOf(const T& an_entry) const;

        std::vector<T> toVector() const;

    private:
        static const int DEFAULT_CAPACITY = 200; //Maxinum bag capacity
        T items_(DEFAULT_CAPACITY); //max bag size
        int item_count_; // current item count
        /** @ return index of target or -1 if target not in bag**/
        int getIndexOf(const T& target) const;

};
#include "ArrayBag.cpp"
#endif