#include <iostream>
using namespace std;

int main()
{
    int n,m,temp;
    cin>>n>>m;
    while(m!=0){
        temp=n;
        n=m;
        m=temp%m;
    }
    cout<<n;
    return 0;
}
