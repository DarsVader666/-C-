#include "class.h"

using namespace std;


PersonScore::PersonScore(char* i, char* n, int m, int e, int c) {
    // Your code goes here
    strcpy(id,"00000000");
    strcpy(name,"name");
    
}

PersonScore::~PersonScore() {
    
}

void PersonScore::GiveValue(int m, int e, int c){
    // Your code goes here
    math=m;
    English=e;
    CS=c;
}

void PersonScore::Display(){
    // Your code goes here
    cout<<id<<' '<<name<<' '<<math<<' '<<English<<' '<<CS<<endl;
}

int PersonScore::GetHigh(){
    // Your code goes here
    int max=0;
    max=(math>English)?math:English;
    if(max<CS) max=CS;
    return max;
}

int PersonScore::GetLow(){
    // Your code goes here
    int min=0;
    min=(math<English)?math:English;
    if(min>CS) min=CS;
    return min;
}

bool PersonScore::isMathPass(){
    // Your code goes here
    return (math>=60);
}

bool PersonScore::isEnglishPass(){
    // Your code goes here
    return (English>=60);
}

bool PersonScore::isCSPass(){
    // Your code goes here
    return (CS>=60);
}