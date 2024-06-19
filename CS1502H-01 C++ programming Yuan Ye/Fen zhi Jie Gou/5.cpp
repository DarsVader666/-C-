#include <iostream>
using  namespace std;
int main()
{
    char a;
    cin>>a;
    if(int(a)>=65&&int(a)<=90) cout<<char(a+32);
    else if(int(a)>=97&&int(a)<=122) cout<<char(a-32);
    else cout<<a;
    return 0;
}