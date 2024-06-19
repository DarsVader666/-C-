#include <iostream>
using namespace std;

int main()
{
    int n,flag=0,rev;
    cin>>n;
    for(int i=1;i<=n;i++){
        rev=i/100000%10+i/10000%10*10+i/1000%10*100+i/100%10*1000+i/10%10*10000+i%10*100000;
        while(rev%10==0) rev/=10;
        if(rev+i==n) flag++;
    }
    cout<<flag;
    return 0;
}
