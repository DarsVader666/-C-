// 请在下方添加代码
/********** Begin *********/
#include<iostream>

using namespace std;
int main() 
{
    int chart[120]={0},i=1;
    bool flag=true;
    string res="True";
    for(int i=0;i<=119;i++){
        chart[i]=getchar();
    }
    if((int)chart[0]<60||(int)chart[0]>90) flag=false;
    if(flag){
        do{
        if(chart[i]>90||chart[i]<65) res="False";
        i++;
    }while(chart[i]!=-1);
    }
    else{
        do{
        if((int)chart[i]<97||(int)chart[i]>122) res="False";
        i++;
    }while(chart[i]!=-1);
    }
    cout<<res;



  return 0;
}
/********** End **********/

