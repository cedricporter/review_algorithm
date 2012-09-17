#include "util.h"

int array[] = {5, 2, 1, 4, 2, 7, 3, 8, 6}; 
unsigned int length = sizeof(array) / sizeof(array[0]); 

template<typename T> 
void quick_sort(T *array, int p, int r)
{
    if (p < r)
    {
        int q = partion(array, p, r);
        // std::cout << "[" << p << ", " << r << ", " << q << "] ";
        // print_array(array, length);

        quick_sort(array, p, q - 1);
        quick_sort(array, q + 1, r); 
    }
} 

template<typename T>
int partion(T *array, int p, int r)
{
    int x = array[r];
    int i = p;
    for (int j = p; j < r; j++)
    {
        if (array[j] < x)
        {
            swap(array[i], array[j]);

            i++;
        }
    }

    swap(array[r], array[i]);

    return i;
}
    
int main(int argc, char *argv[])
{
    print_array(array, length);
    std::cout << "--------------\n";

    quick_sort(array, 0, length - 1);

    print_array(array, length);
    
    return 0;
}
