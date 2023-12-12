#include "ArrayWrap.h"
#include <iostream>


int main() {
    try {
        // Testing ArrayWrap with integers
        ArrayWrap<int> intArray(5);
        
        // Test push_back
        intArray.push_back(1);
        intArray.push_back(2);
        intArray.push_back(3);

        // Display the array before removal
        std::cout << "Array before removal: ";
        intArray.print();

        // Test remove with out-of-bounds index
        try {
            intArray.remove(5); // This should throw an IndexException
        } catch (ListException& e) {
            std::cerr << "Error: " << e.getError() << std::endl;
        }

        // Test remove with under-bounds index
        try {
            intArray.remove(-1); // This should throw an IndexException
        } catch (ListException& e) {
            std::cerr << "Error: " << e.getError() << std::endl;
        }

        // Display the array after removal
        std::cout << "Array after removal: ";
        intArray.print();

        // ... (continue modifying the rest of the code similarly)

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


try {
        // Creating an ArrayWrap instance with a maxSize of 5
        ArrayWrap<int> intArray(5);

        // Testing push_back
        intArray.push_back(1);
        intArray.push_back(2);
        intArray.push_back(3);

        // Testing print
        std::cout << "Array before removal: ";
        intArray.print();
  try{
        std::cout<<intArray[1]<<std::endl;
        std::cout<<intArray[11]<<std::endl;
    }
catch(ListException &e){
    std::cerr <<e.getError() <<std::endl;
}
try{
    intArray.swap(2,2);
    intArray.print();

}
catch(ListException &e){
    std::cerr <<e.getError() <<std::endl;
}

        // Testing remove with out-of-bounds index
        try {
            intArray.remove(5); // This should throw an IndexException
        } catch (ListException& e) {
            std::cerr << "ListException: " << e.getError() << std::endl;
        }

        // Testing remove with valid index
        intArray.remove(1);

        // Testing print after removal
        std::cout << "Array after removal: ";
        intArray.print();

        // Testing pop_back
        intArray.pop_back();

        // Testing clear
        intArray.clear();

        // Testing push_back exceeding maxSize
        try {
            intArray.push_back(4); // This should throw a SizeException
        } catch (ListException& e) {
            std::cerr << "ListException: " << e.getError() << std::endl;
        }

        // ... add more tests based on your requirements

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

  
   ArrayWrap<int> fullmarks(4);
    try{
        ArrayWrap<int> fullmarks(-10);
    }

catch(ListException& e){
std::cerr <<e.getError()<<std::endl;
}

try{
    fullmarks.push_back(5);
    fullmarks.push_back(-1);
    fullmarks.push_back(2.4);
    fullmarks.push_back(89);
}
    catch(ListException& e){
        std::cerr<<e.getError() <<std::endl;
    }
try{
    fullmarks.push_back(699);
}
catch(ListException& e){
    std::cerr<<e.getError()<<std::endl;
}
    return 0;
}
