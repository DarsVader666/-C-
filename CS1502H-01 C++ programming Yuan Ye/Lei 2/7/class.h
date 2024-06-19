#ifndef CLASS_H
#define CLASS_H
#include<iostream>
using namespace std;
class BigInteger{
    private:
        int digit[1005];
        int len;
    public:
        void shuru();
        void show();
    friend BigInteger sum(BigInteger a,BigInteger b);
};



#endif /* CLASS_H */