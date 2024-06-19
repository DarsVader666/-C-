#include "class.h"
#include<iostream>
#include<cstring>
using namespace std;

void BigInteger::shuru() {
    char ch[1001];
    cin.getline(ch,1000);
    len=strlen(ch);
    for(int i=0;i<len;i++) {
        digit[len-1-i] = ch[i]-'0';
    }
}
void BigInteger::show() {
    if(digit[len]!=0) len++;
    for (int i = len-1; i >=0; i--) cout << digit[i];
}

BigInteger sum(BigInteger a, BigInteger b) {
    BigInteger c;
    
    int max = a.len > b.len ? a.len : b.len;
    int min= a.len < b.len ? a.len : b.len;
    c.len = max;
    bool flag=a.len>b.len?true:false;
    for (int i = 0; i <= max; i++) c.digit[i] = 0;
    for (int i = 0; i < min; i++) {
        if (a.digit[i] + b.digit[i] < 10) c.digit[i] += a.digit[i] + b.digit[i];
        else {
            c.digit[i] += a.digit[i] + b.digit[i]-10;
            c.digit[i+1]++;
        }
    }
    if(flag){
        for(int i=min;i<max;i++){
            if(c.digit[i]+a.digit[i]<10) c.digit[i]+=a.digit[i];
            else{
                c.digit[i]+=a.digit[i]+c.digit[i]-10;
                c.digit[i+1]++;
            }
        }
    }else{
        for(int i=min;i<max;i++){
            if(c.digit[i]+b.digit[i]<10) c.digit[i]+=b.digit[i];
            else{
                c.digit[i]+=b.digit[i]+c.digit[i]-10;
                c.digit[i+1]++;
            }
        }
    }
    return c;
}