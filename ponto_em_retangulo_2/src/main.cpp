/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    Ponto p1, p2, p3;

    while( cin >> std::ws >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y) {
        location_t op = pt_in_rect(p1, p2, p3);

        if(op == INSIDE) {
            cout << "inside" << endl;
        } else if(op == BORDER) {
            cout << "border" << endl;
        } else if(op == OUTSIDE) {
            cout << "outside" << endl;
        }
    }

    return 0;
}
