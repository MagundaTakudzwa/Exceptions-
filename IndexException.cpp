//#ifndef INDEX_EXCEPTION_CPP
//#define INDEX_EXCEPTION_CPP

#include "IndexException.h"
#include <sstream>

IndexException::IndexException(int index, int size) : m_index(index), m_size(size) {}

std::string IndexException::getError() {
    std::stringstream ss;
    std::stringstream ss1;
    std::string result ="";
    if (m_index < 0) {
        ss << m_index;
        result = "Index " + ss.str() + " is negative.";
        //ss << "Index " << m_index << " is negative.";
     } else {
        ss << m_index;
        ss1 << m_size;
        result = "Index " + ss.str() + " is out of bounds for list of size " + ss1.str() + ".";
        //ss << "Index " << m_index << " is out of bounds for list of size " << m_size << ".";
     }
    return result;//ss.str();
}

//#endif
