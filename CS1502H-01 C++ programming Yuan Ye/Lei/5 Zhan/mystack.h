#ifndef mystack_h
#define mystack_h
#include<iostream>
using namespace std;

class mystack{
private:
    int *items;
    int top,stacksize,top_pt;
public:
    mystack(int size){
        stacksize=size;
        top_pt=-1;
        items=new int[stacksize];
    }
    ~mystack(){
        delete [] items;
        top_pt = -1;
    }
    bool isempty(){
        return top_pt==-1;
    }
    bool isfull(){
        return top_pt>=(stacksize-1);
    }
    bool push(int n){
        if(isfull()){
            return false;
        }
        items[++top_pt] = n;
        return true;
    }
    bool pop(int &n){
        if(isempty()){
            return false;
        }
        n = items[top_pt];
        top_pt--;
        return true;
    }
 };
#endif