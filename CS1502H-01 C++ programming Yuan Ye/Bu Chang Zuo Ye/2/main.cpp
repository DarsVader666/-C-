#include <iostream>
#include "class.h"

using namespace std;

// Please do not modify this file!

int main()
{
    char name[20];
    cin>>name;
    int y, m, d;
    cin>>y>>m>>d;

    student s(name,y,m,d);

    int coursenum;
    cin>>coursenum;

    while (coursenum-- >0 ){
        char coursename[20];
        cin>>coursename;
        int score;
        cin>>score;
        s.inputscore(coursename,score);
    }

    s.print();
    return 0;
}