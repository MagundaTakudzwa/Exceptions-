//#ifndef SIZEEXCEPTION_CPP
//#define SIZEEXCEPTION_CPP

#include "SizeException.h"
#include <sstream>

SizeException::SizeException(int size) : m_size(size) {}

std::string SizeException::getError() {
    std::stringstream ss;
    if (m_size == 0) {
        ss << "List is empty.";
    } else {
        ss << "List is full with " << m_size << " elements.";
    }
    
    return ss.str();
}

//#endif
