#include <iostream>
using namespace std;

int main()
{
    int n,x;
    int a[1005];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;\
    bool flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<i;
            flag=1;
            break;
        }
    }
    bool sssss=0;
    if(!flag){
        if(x<=a[0]){
            cout<<0;
            sssss=1;
            exit(0);
        }
        else{for(int i=0;i<n;i++){
        if(a[i]<=x&&a[i+1]>=x){
            cout<<i+1;
            sssss=1;
            break;
        }} 
        if(!sssss){
            cout<<n;
        }
    }
    }
    return 0;
}