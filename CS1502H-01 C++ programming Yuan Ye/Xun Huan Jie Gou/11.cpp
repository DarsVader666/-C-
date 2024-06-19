#include <iostream>
using namespace std;

int main()
{
    int n,p,flag=0;
    int sum=1;
    cin>>n>>p;
    while(n){
        flag+=n/p;
        n/=p;
    }
    cout<<flag;
    return 0;
}