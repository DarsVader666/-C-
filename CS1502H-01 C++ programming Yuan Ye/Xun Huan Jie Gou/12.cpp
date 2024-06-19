#include <iostream>
using namespace std;

int main()
{
    int m,n,sum=0;
    cin>>m>>n;
    if(m<=2) sum++;
    for(int i=m;i<=n;i++){
        for(int j=2;j<=i-1;j++){
            if(i%j==0) break;
            if(j==i-1) {
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}
