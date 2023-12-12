#ifndef ARRAYWRAP_CPP
#define ARRAYWRAP_CPP

#include "ArrayWrap.h"
// #include "ConstructorException.h"
// #include "IndexException.h"
// #include "SizeException.h"

template <typename T>
ArrayWrap<T>::ArrayWrap(int size)  {
    if (size <= 0) {
        throw ConstructorException();
    }
    maxSize = size;
    m_size = 0;
    m_array = new T[size];

}


template <typename T>
ArrayWrap<T>::~ArrayWrap() {
    if (m_array != NULL) {
        delete[] m_array;
    }
}


template <typename T>
T& ArrayWrap<T>::operator[](int index) {

    if (index < 0 || index >= m_size) {
        throw IndexException(index, m_size);
    }
    return m_array[index];

}


template <typename T>
void ArrayWrap<T>::swap(int index1, int index2) {
    if (index1 < 0 || index2 < 0 || index1 >= m_size || index2 >= m_size) {
        throw IndexException(index1,m_size);
    }

    if (index1 != index2) {
        T temp = m_array[index1];
        m_array[index1] = m_array[index2];
        m_array[index2] = temp;
 
    }
}


template <typename T>
void ArrayWrap<T>::push_back(T item) {
    if (m_size >= maxSize) {
        throw SizeException(maxSize);
    }

    m_array[m_size] = item;
    m_size++;
}


template <typename T>
T ArrayWrap<T>::pop_back() {
    if (m_size <= 0) {
        throw SizeException(m_size);
    }

    T item = m_array[m_size - 1];
    m_size--;
    return item;
}


template <typename T>
void ArrayWrap<T>::remove(int index) {
    if (index < 0 || index >= m_size) {
        throw IndexException(index, m_size);
    }

    // Shift the elements to cover the open space
    for (int i = index; i < m_size - 1; i++) {
        m_array[i] = m_array[i + 1];
    }

    // Decrement the size to indicate the removal
    m_size--;
}


template <typename T>
void ArrayWrap<T>::clear() {
    m_size = 0;
}

template <typename T>
void ArrayWrap<T>::print() {
    for (int i = 0; i < m_size; ++i) {
        std::cout << m_array[i];
        if (i < m_size - 1) {
            std::cout << ",";
        }
    }
    std::cout << std::endl;
}

#endif