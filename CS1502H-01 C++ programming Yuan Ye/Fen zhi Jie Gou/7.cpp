#include <iostream>
using  namespace std;
int main()
{
    int year,month,day;
    bool run=false;
    cin>>year>>month>>day;
    if(year%4==0&&year%100!=0) run=true;
    else if(year%400==0) run=true;
    else run=false;
    if(month<1||month>12) {
        cout<<"Illegal";
        exit(0);
    }
    
    if(month<=7&&month%2==1){
        if(day<1||day>31){
            cout<<"Illegal";
            exit(0);
        }
    }
    if(month<=7&&month!=2&&month%2==0){
        if(day<1||day>30){
            cout<<"Illegal";
            exit(0);
        }
    }
    if(month==2&&run){
        if(day<1||day>29){
            cout<<"Illegal";
            exit(0);
        }
    }
    if(month==2&&run==false){
        if(day<1||day>28){
            cout<<"Illegal";
            exit(0);
        }
    }
    if(month>7&&month%2==1){
        if(day<1||day>30){
            cout<<"Illegal";
            exit(0);
        }
    }
    if(month>7&&month%2==0){
        if(day<1||day>31){
            cout<<"Illegal";
            exit(0);
        }
    }
    int date[20];
    date[1]=31;
    date[2]=28;
    if(run) date[2]=29;
    date[3]=31;
    date[4]=30;
    date[5]=31;
    date[6]=30;
    date[7]=31;
    date[8]=31;
    date[9]=30;
    date[10]=31;
    date[11]=30;
    date[12]=31;
    int sb=0;
    for(int i=1;i<month;i++){
        sb+=date[i];
    }
    sb+=day;
    cout<<sb;
    return 0;
}