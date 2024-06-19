#include <iostream>
using  namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&a<b+c){
        cout<<"yes"<<endl;
        if(a*a==b*b+c*c||a*a+b*b==c*c||b*b==a*a+c*c){
            cout<<"yes";
        }else cout<<"no";
    }
    else cout<<"no";
    return 0;
}