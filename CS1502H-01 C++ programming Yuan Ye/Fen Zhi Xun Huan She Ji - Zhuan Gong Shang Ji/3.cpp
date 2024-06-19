// 请在下方添加代码
/********** Begin *********/
#include<iostream>
#include<stdio.h>
using namespace std;
int main() 
{
    int m,n;
    cin>>m>>n;
    if(m>n){
        m+=n;
        n=m-n;
        m-=n;
    }
    int ggd=n;
    int gcd=1;
    for(int i=2;i<=m;i++){
        if(m%i==0&&n%i==0) gcd=i;
    }
    while(ggd%m!=0||ggd%n!=0){
        ggd+=1;
    }
    cout<<gcd<<endl;
    cout<<ggd<<endl;

  return 0;
}
/********** End **********/

