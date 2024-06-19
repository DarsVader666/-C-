#include "class.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

String::String(char* Str=nullptr) {
    myStr = Str;
    myLen = strlen(myStr);
    myStr[myLen]='\0';
}
// 复制构造函数
String::String(String& str) {

}
// 析构函数
String:: ~String() {}
// 0:获取字符串长度
int String::length() {
    return myLen;
}
// 1:求子字符串[start,start+n-1]
void String::substr(int start, int n) {
    for (int i = start; i <= n; i++) cout << myStr[i];
    cout << endl;
}
// 2:查找首次出现字符c的位置
int String::find_first_of(char c) {
    int i = 0;
    for (i = 0; i < myLen; i++) {
        if (myStr[i] == c) return i;
    }
    if (i == myLen - 1) return -1;

    return 0;
}
// 3:在index处添加字符c
void String::add_before(int index, char c) {
    myLen++;
    for(int i=myLen-1;i>index+1;i--){
        myStr[i]=myStr[i-1];
    }
    myStr[index+1]=c;
}
// 4:删除某个位置上的字符
void String::delete_at(int index) {
    for(int i=index;i<myLen;i++){
        myStr[i]=myStr[i+1];
    }
    myLen--;
}
// 5:输出字符串
void String::printStr() {
    for(int i=0;i<myLen;i++) cout<<myStr[i];
}
