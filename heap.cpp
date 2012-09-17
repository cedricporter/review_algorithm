#include "util.h"

#define PARENT(i) (((i) - 1) / 2)
#define LEFT(i) (((i) * 2) + 1)
#define RIGHT(i) (((i) * 2) + 2)

template<typename T>
void max_heapify(T *array, unsigned int size, int i)
{
    int left, right, largest;
    left = LEFT(i);
    right = RIGHT(i);

    if (left < size && array[left] > array[i])
        largest = left;
    else
        largest = i;

    if (right < size && array[right] > array[largest])
        largest = right; 

    if (i != largest)
    {
        T temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;

        max_heapify(array, size, largest);
    } 
}

template<typename T>
void build_max_heap(T *array, unsigned int size)
{
    for (int i = size / 2; i >= 0; i--)
    {
        max_heapify(array, size, i); 
    }
}

template<typename T>
void heap_sort(T *array, unsigned int size)
{
    build_max_heap(array, size);
    print_array(array, size);

    for (int i = size - 1; i > 0; i--)
    {
        T temp = array[0];
        array[0] = array[i];
        array[i] = temp;

        max_heapify(array, i, 0);

        print_array(array, size);
    } 
}

int main(int argc, char *argv[])
{
    int array[] = {5, 2, 1, 4, 2, 7, 3, 8, 6};

    unsigned int length = sizeof(array) / sizeof(array[0]); 

    print_array(array, length);
    std::cout << "--------------\n";

    heap_sort(array, length);

    print_array(array, length);
    
    return 0;
}
