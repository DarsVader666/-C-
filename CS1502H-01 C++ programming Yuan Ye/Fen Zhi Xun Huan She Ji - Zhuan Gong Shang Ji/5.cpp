// 请在下方添加代码
/********** Begin *********/
#include<iostream>

using namespace std;
int main() 
{
    char a[200];
    for(int i=0;i<=199;i++){
        a[i]=getchar();//给数组的每一位输入字符，没输入的都是-1
    }
    int rep=0;//rep指的是相同连续字符的个数
    char temp=a[0];//temp是上一位的字母，用来检验两位字母是否一样
    int i=0;//i用来记录原本的字符串长度。
    char letter[100];//用来存储每一组重复字母的第一位
    int num[100];//记录每一组重复字母重复了几次
    int loc=0;//loc用来定位重复次数和字母在num[]里面的位置
    while(a[i]>0){//只要不是-1就继续
        if(a[i]==temp){
            rep++;//如果与上一次字母相同，那就重复次数+1
        }else{//如果不一样，就说明已经结束了重复
            num[loc]=rep;//记录下重复了几次
            letter[loc]=temp;//记录下重复的是什么字母
            temp=a[i];//把temp记为新的字符
            rep=1;//重复次数重新从1开始算
            loc++;//新的重复次数与字母的位置加一
            
        }
        i++;
    }
    loc++;//循环结束时，要记得给loc+1，因为不会再有新的不同字母了，而else里面的+1必须要有不同字母才+1
    if(loc*2>=i){//检验压缩后的长度，字母和数字交替来，很明显压缩后的长度就是2倍的loc
        for(int j=0;j<=i-1;j++){
            cout<<a[j];
        }
    } else{//如果压缩后变短了，那就输出压缩结果
        for(int j=0;j<=loc-2;j++){
            cout<<letter[j]<<num[j];
        }
        cout<<temp<<rep;//注意，最后一组重复字母没有存进num和letter里（因为最后一组后面没有新的字母了），所以要特别单独输出
    }
  return 0;
}
/********** End **********/

