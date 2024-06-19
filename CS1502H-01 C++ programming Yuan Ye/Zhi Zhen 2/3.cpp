#include <iostream>
#include<cstring>
using namespace std;

//请在此处定义getDate函数，main函数内容不要更改
void getDate(int &a,int &b,int &c){
    char ch[10];
    cin>>ch;
    int i=0;
    while(ch[i]!='-'){
        i++;
    }
    i--;
   if(i==0){
        a=(int)ch[0]-48;
    }else a=10*(ch[0]-48)+ch[1]-48;
    
    if(ch[i+2]=='J'){
        if(ch[i+3]=='a') b=1;
        else if(ch[i+4]=='n') b=6;
        else b=7;
    }
    if(ch[i+2]=='F') b=2;
    if(ch[i+2]=='M'){
        if(ch[i+3]=='a'){
            if(ch[i+4]=='r') b=3;
            else b=5;
        }
    }
    if(ch[i+2]=='A'){
        if(ch[i+3]=='p') b=4;
        else b=8;
    } 
    if(ch[i+2]=='S') b=9;
    if(ch[i+2]=='O') b=10;
    if(ch[i+2]=='N') b=11;
    if(ch[i+2]=='D') b=12;

    i+=6;
    if(ch[i+1]=='\0') c=ch[i]-48;
    else c=(ch[i]-48)*10+ch[i+1]-48;
}
int main()
{
    int day, month, year;
    getDate(day,month,year);
    cout<<day<<" "<<month<<" "<<year<<endl;
    return 0;
}
