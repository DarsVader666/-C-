#include <iostream>
using  namespace std;
int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    for(int i=0;i<=1;i++){
        if(a[i]<a[i+1]){
            a[i]=a[i]+a[i+1];
            a[i+1]=a[i]-a[i+1];
            a[i]-=a[i+1];
        }
    }
    for(int i=0;i<=2;i++) cout<<a[i]<<" ";
    return 0;
}