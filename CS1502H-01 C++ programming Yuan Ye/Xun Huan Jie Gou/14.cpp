#include <iostream>
using namespace std;

int main()
{
    int n,max=100;
    cin>>n;
    if(n<1000||n>1000000) cout<<"Input error!";
    else {
        for(int i=100;i<=999;i++){
            if(n%i==0) max=i;
        }
        if(n%100!=0&&max==100) cout<<"Not found!";
    else cout<<max;
    }
    
    return 0;
}
