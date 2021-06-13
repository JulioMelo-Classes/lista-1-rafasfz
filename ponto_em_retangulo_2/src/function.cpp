#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    if(is_between(IE.x, SD.x, P.x) && is_between(IE.y, SD.y, P.y)) {
        return location_t::INSIDE;
    }

    if(((IE.x == P.x || SD.x == P.x) && is_between_or_equal(IE.y, SD.y, P.y)) || ((IE.y == P.y || SD.y == P.y) && is_between_or_equal(IE.x, SD.x, P.x))) {
        return location_t::BORDER;
    }

    return location_t::OUTSIDE;
}

bool is_between(int n1, int n2, int n3) {
    if((n3 > n1 && n3 < n2) || (n3 > n2 && n3 < n1))
        return true;
    return false;
}

bool is_between_or_equal(int n1, int n2, int n3) {
    if((n3 >= n1 && n3 <= n2) || (n3 >= n2 && n3 <= n1))
        return true;
    return false;
}
