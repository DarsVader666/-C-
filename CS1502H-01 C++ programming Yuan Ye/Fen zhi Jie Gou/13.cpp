#include <iostream>
using  namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    if(sum<0&&a>0&b>0) cout<<"error";
    else if(sum>0&&a<0&&b<0) cout<<"error";
    else cout<<a+b;
    return 0;
}