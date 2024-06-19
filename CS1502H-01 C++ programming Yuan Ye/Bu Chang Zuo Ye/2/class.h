#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <cstring>

using namespace std;


class date {
private:
    int year;
    int month;
    int day;
public:
    // Your code goes here.
    int giveDate(int yy,int mm,int dd);
    void printDate();
};


class score {
private:
    char course[20];
    int value;
public:
    // Your code goes here.
    void giveScore(const char* n,int v);
    void printScore();
};


class student {
private:
    static const int MAX = 100 ;
    char  name[20];
    date  birthday;
    int coursenum;
    score data[MAX];
public:
    student(const char *n, int yy, int mm ,int dd);
    void inputscore(const char *c, int d);       // 添加成绩
    void print();
};


#endif //CLASS_H
