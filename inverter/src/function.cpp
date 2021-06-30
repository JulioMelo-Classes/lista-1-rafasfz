//#include "function.h"

#include <iterator>
using std::iter_swap;
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*
 ok
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    for(int i=0; i<(arr.size()/2); i++) {
        std::swap(arr[i], arr[arr.size() - 1 - i]);
    }
}
