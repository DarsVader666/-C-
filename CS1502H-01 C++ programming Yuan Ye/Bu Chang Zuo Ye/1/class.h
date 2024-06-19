#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;

class safeArray{
protected:
    int size;
    int *data;
public:
    safeArray(int size);
    virtual bool get(int index, int& value);
    virtual void set(int index, int value);
};

class safeArrayWithBound: public safeArray{
protected:
    int lowBound;
    int highBound;
public:
    safeArrayWithBound(int low, int high);
    bool get(int index, int& value);
    void set(int index, int value);
};

#endif //CLASS_H
