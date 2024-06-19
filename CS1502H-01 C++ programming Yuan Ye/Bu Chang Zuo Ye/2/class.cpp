#include "class.h"

// Your code goes here.
#include<iostream>
#include<cstring>
using namespace std;
int date:: giveDate(int yy,int mm,int dd){
    year=yy;
    month=mm;
    day=dd;
}
void date:: printDate(){
    cout<<"Student birthday: ";
    if(year<10) cout<<0<<year;
    else cout<<year;
    if(month<10) cout<<'-'<<0<<month;
    else cout<<'-'<<month;
    if(day<10) cout<<'-'<<0<<day;
    else cout<<'-'<<day;
    cout<<endl<<endl; 
}
void score:: giveScore(const char* n,int v){
    strcpy(course,n);
    value=v;
}
void score:: printScore(){
    cout<<"Course name: "<<course<<", score is: "<<value<<endl;
}
student:: student(const char *n, int yy, int mm ,int dd){
    strcpy(name,n);
    birthday.giveDate(yy,mm,dd);
}
void student:: inputscore(const char *c, int d){
    data[coursenum].giveScore(c,d);
    coursenum++;
}      // 添加成绩
void student:: print(){
    cout<<"Student name: "<<name<<endl;
    birthday.printDate();
    cout<<"Totally "<<coursenum<<" courses scores."<<endl;
    for(int p=0;p<coursenum;p++){
        data[p].printScore();
    }
    cout<<endl;

    
    //cout<<"Course name: "<< <<", score is: "<< <<endl;
}