#ifndef INDEXEXCEPTION_H
#define INDEXEXCEPTION_H

#include "ListException.h"
#include <string>

class IndexException : public ListException {
public:
    IndexException(int index, int size);
    std::string getError() override;

private:
    int m_index;
    int m_size;
};

#endif 
