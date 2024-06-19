#include <iostream>
using namespace std;

int main()
{
    int f0=0,f1=1,n,res=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        res=f0+f1;
        f0=f1;
        f1=res;
    }
    cout<<res;
    return 0;
}
