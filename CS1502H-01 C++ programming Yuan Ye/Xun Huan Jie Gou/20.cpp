#include <iostream>
using namespace std;

int main()
{
    long long number,digit;
    cin>>number>>digit;
    long long a[100],j=0,flag=0;
    for(long long i=1000000000000000;i>=1;i/=10){
        a[j]=number/i%10;
        j++;
    }
    int p=0;
    while(a[j]==0){
        p++;
    }
    for(int k=p;k<=j;k++){
        if(a[k]==digit) flag++;
    }
    if(digit==0) cout<<flag-7;
    else cout<<flag;
    return 0;
}
