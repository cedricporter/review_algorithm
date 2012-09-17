#ifndef _UTIL_H_
#define _UTIL_H_

#include <iostream>
#include <vector>

template<typename T>
void print_array(T *array, unsigned int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

template<typename T>
void swap(T& lhs, T& rhs)
{
    T temp = lhs;
    lhs = rhs;
    rhs = temp;
}


#endif /* _UTIL_H_ */




















