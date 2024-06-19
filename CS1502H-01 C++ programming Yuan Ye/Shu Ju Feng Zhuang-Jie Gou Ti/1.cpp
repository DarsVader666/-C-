#include <iostream>
using namespace std;
struct theclock{
    int hour,minute,second;
};
void setTime(theclock &a,int h,int m,int s);
void increase(theclock &a);
void showTime(theclock &a);

int main(){
    theclock time1,time2;
    int h,m,s,hh,mm,ss;
    cin>>h>>m>>s>>hh>>mm>>ss;
    setTime(time1,h,m,s);
    showTime(time1);
    increase(time1);
    showTime(time1);
    setTime(time2,hh,mm,ss);
    showTime(time2);
    increase(time2);
    showTime(time2);
    return 0;
}
void setTime(theclock &a,int h,int m,int s){
    a.hour=h;
    a.minute=m;
    a.second=s;
}
void increase(theclock &a){
    if(a.second==59){
        a.second=0;
        a.minute++;
        if(a.minute==60){
            a.minute=0;
            a.hour++;
            if(a.hour==24){
                a.hour=0;
            }
        }       
    }else a.second++;
}
void showTime(theclock &a){
    if(a.hour/10==0) cout<<0<<a.hour<<':';
    else cout<<a.hour<<':';
    if(a.minute/10==0) cout<<0<<a.minute<<':';
    else cout<<a.minute<<':';
    if(a.second/10==0) cout<<0<<a.second<<endl;
    else cout<<a.second<<endl;
}

