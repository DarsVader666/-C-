#include<iostream>
using namespace std;
int main(){
    int n,sum=0,sb;
    cin>>n;
    for(int i=0;i<=n;i++) sum+=i;
    for(int i=1;i<=n;i++){
        cin>>sb;
        sum-=sb;
    }
    cout<<sum;

}