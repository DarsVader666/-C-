#include <iostream>
using  namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=12||b>=12){
        if(a-b>=3||b-a>=3) cout<<"Illegal";
        else if(a-b==2) cout<<"A win";
        else if(b-a==2) cout<<"B win";
        else if(a-b<=1||b-a<=1) cout<<"In progress";
    }
    else if(a==11&&b<10) cout<<"A win";
    else if(b==11&&a<10) cout<<"B win";
    else cout<<"In progress";
    return 0;
}