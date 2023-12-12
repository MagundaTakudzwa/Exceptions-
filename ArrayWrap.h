#ifndef ARRAY_WRAP_H
#define ARRAY_WRAP_H

#include "IndexException.h"
#include "ConstructorException.h"
#include "SizeException.h"
#include <iostream>

template <typename T>
class ArrayWrap {
public:
    ArrayWrap(int size);
    ~ArrayWrap();
    T& operator[](int index);
    void swap(int index1, int index2);
    void push_back(T item);
    T pop_back();
    void remove(int index);
    void clear();
    void print();

private:
    T* m_array;
    int m_size;
    int maxSize;
};

#include "ArrayWrap.cpp" 

#endif 
