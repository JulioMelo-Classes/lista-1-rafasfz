#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> fibonacci;

    if(n > 1) {
        fibonacci.push_back(1);
        fibonacci.push_back(1);
        
        while(fibonacci[(fibonacci.size()-1)-1] + fibonacci[(fibonacci.size()-1)] < n) {
            fibonacci.push_back(fibonacci[(fibonacci.size()-1)-1] + fibonacci[(fibonacci.size()-1)]);
        }
    }


    return fibonacci;
}
