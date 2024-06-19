#include <iostream>
#include "class.h"

using namespace std;

// Do not modify this file!

int main()
{
    pet *pp[4];
    const char *str[4] = { "aaa", "bbb", "ccc", "ddd"};

    for (int k = 0; k < 4; ++k) {
        if ( k % 2 ) pp[k] = new cat(str[k], k);
        else pp[k] = new dog(str[k], k);
    }

    for (int k = 0; k < 4; ++k)
        pp[k]->print();

    return 0;
}