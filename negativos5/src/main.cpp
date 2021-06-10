#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int numbers[5];
    int negatives = 0;

    for (int i=0; i<5; i++) {
        cin >> numbers[i];
        if (numbers[i] < 0)
            negatives++;
    }

    cout << negatives;

    return 0;
}
