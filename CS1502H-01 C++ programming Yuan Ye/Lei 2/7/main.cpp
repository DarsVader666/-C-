#include <iostream>
#include "class.h"


using namespace std;

int main(){
    BigInteger a,b,c;
    a.shuru();
    b.shuru();
    c=sum(a,b);
    c.show();
    return 0;
}