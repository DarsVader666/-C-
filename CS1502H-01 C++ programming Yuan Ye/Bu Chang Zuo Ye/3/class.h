#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <cstring>
using namespace std;
// Your code goes here.
class pet{
protected:
    char owner[4];
    int age;
public:
    pet(const char *a, int b){
        strcpy(owner, a);
        age = b;
    }
    virtual void print() = 0;
};

class cat:public pet{
public:
    cat(const char *a, int b):pet(a, b) {}
    void print(){
        cout <<"I am "<<owner<<"\'s cat! I am "<<age<<" years old."<<endl;
    }
};

class dog:public pet{
public:
    dog(const char *a, int b):pet(a, b) {}
    void print(){
        cout <<"I am "<<owner<<"\'s dog! I am "<<age<<" years old."<<endl;
    }
};

#endif //CLASS_H
