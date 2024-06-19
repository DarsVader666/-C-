#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=9;i++){
        n=n/100000000%10+n/10000000%10+n/1000000%10+n/100000%10+n/10000%10+n/1000%10+n/100%10+n/10%10+n%10;
    }
    cout<<n;
    return 0;
}
