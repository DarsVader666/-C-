#include <iostream>
using  namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int p=0;
    /*if(m%10>7) p+=100*(m%10);
    else if(m%10<7) p+=100*((m%10+10)-7); 
    if(m/10%10>7) p+=1000*(m/10%10);
    else if(m/10%10<7) p+=1000*((m/10%10+10)-7);
    if(m/100%10>7) p+=(m/100%10);
    else if(m/100%10<7) p+=((m/100%10+10)-7);
    if(m/1000>7) p+=10*(m/1000);
    else if(m/1000<7) p+=10*((m/1000+10)-7);*/
    for(int i=0;i<=9999;i++){
        if(m==1000*(((i/10%10)+7)%10)+10*(((i/1000)+7)%10)+((i/100%10)+7)%10+100*(((i%10)+7)%10)){
            p=i;
            break;
        }
    }
    cout<<1000*(((n/10%10)+7)%10)+10*(((n/1000)+7)%10)+((n/100%10)+7)%10+100*(((n%10)+7)%10)<<" "<<p;
    //输入你的代码
    return 0;
}