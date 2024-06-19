// 请在下方添加代码
/********** Begin *********/
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main() 
{
    int a[6],temp;
    for(int i=0;i<=5;i++) cin>>a[i];
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(int i=0;i<=5;i++) cout<<a[i]<<" ";



  return 0;
}
/********** End **********/

