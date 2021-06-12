#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], int n )
{
    std::pair<int, int> positions(0, 0);

    if (n==0) {
        positions.first = -1;
        positions.second = -1;
    } else {
        std::pair<int, int> minmax(V[0], V[0]);

        for(int i=0; i<n; i++) {
            if(V[i] < minmax.first) {
                minmax.first = V[i];
                positions.first = i;
            }

            if(V[i] >= minmax.second) {
                minmax.second = V[i];
                positions.second = i;
            }
        }
    }

    return positions;
}
