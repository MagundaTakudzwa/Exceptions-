#ifndef CONSTRUCTOR_EXCEPTION_H
#define CONSTRUCTOR_EXCEPTION_H

#include "ListException.h"


class ConstructorException : public ListException {
public:

     std::string getError() override;
};

#endif 
