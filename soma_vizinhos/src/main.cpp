/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n, total=0;

    cin >> m;
    cin >> n;

    if(n > 0) {
        for(int i=0; i<n; i++) {
            total+=m+i;
        }
    } else if(n < 0) {
        for(int i=0; i<(n*-1); i++) {
            total+=m-i;
        }
    } else {
        total=m;
    }

    cout << total << endl;

    return 0;
}
