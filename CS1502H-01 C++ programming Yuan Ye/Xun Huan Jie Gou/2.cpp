#include <iostream>
using namespace std;

int main()
{
    int a,n,sum=0,temp;
    cin>>a>>n;
    temp=a;
    for(int i=1;i<=n;i++){
        sum+=temp;
        temp*=10;
        temp+=a;
    }
    cout<<sum;
    return 0;
}
