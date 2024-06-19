#include "class.h"
// Your code goes here
#include<iostream>
using namespace std;
safeArray:: safeArray(int s){
    size=s;
    data=new int[size];
    for(int i=0;i<size;i++) data[i]=0;
}
bool safeArray:: get(int index, int& value){
    if(0<=index&&index<size){
        value=data[index];
        return true;
    }else {
        cout<<"Index out of range!"<<endl;
        return false;
    }
}
void safeArray:: set(int index, int value){
    if(0<=index&&index<size){
        data[index]=value;
    }else{
        cout<<"Index out of range!"<<endl;
    }
}
safeArrayWithBound:: safeArrayWithBound(int low, int high):safeArray(high-low){
    lowBound=low;
    highBound=high;
}
bool safeArrayWithBound:: get(int index, int& value){
    if(lowBound<=index&&index<highBound){
        value=data[index];
        return true;
    }else{
        cout<<"Index out of range!"<<endl;
        return false;
    }
}
void safeArrayWithBound:: set(int index, int value){
    if(lowBound<=index&&index<highBound){
        data[index]=value;
    }else{
        cout<<"Index out of range!"<<endl;
    }
}
