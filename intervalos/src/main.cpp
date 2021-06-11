/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int x;
    float total=0;
    float n1=0, n2=0, n3=0, n4=0;
    while( cin >> std::ws >> x) {
        if(x >= 0 && x < 25) {
            n1++;
        }
        if(x >= 25 && x < 50) {
            n2++;
        }
        if(x >= 50 && x < 75) {
            n3++;
        }
        if(x >= 75 && x < 100) {
            n4++;
        }
        total++;
    }

    cout << std::setprecision(4) << (n1/total)*100 << endl;
    cout << std::setprecision(4) << (n2/total)*100 << endl;
    cout << std::setprecision(4) << (n3/total)*100 << endl;
    cout << std::setprecision(4) << (n4/total)*100 << endl;
    cout << std::setprecision(4) << ((total-(n1+n2+n3+n4))/total)*100 << endl;

    return 0;
}
