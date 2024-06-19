// 请在下方添加代码
/********** Begin *********/
#include<iostream>
#include<stack>
using namespace std;
int main() 
{
    char a[200];
    int loc[200];
    int i=0,j=0;
    for(;i<=99;i++){
        a[i]=getchar();
        if((int)a[i]==-1) break;
        if((int)a[i]<=90&&(int)a[i]>=65||(int)a[i]>=97&&(int)a[i]<=122){
            loc[j]=i;
            j++;
        } 
    }
    int rec=0;
    for(int ii=0;ii<=i-1;ii++){
        if(ii==loc[rec]){
            cout<<a[loc[j-1-rec]];
            rec++;
        }else cout<<a[ii];
    }
  return 0;
}
/********** End **********/

