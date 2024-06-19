#include <iostream>
using  namespace std;
int main()
{
    char a[5];
    for(int i=0;i<=4;i++){
        a[i]=getchar();
    }
    if(a[0]==a[4]&&a[1]==a[3]) cout<<"Yes";
    else cout<<"No";
    return 0;
}