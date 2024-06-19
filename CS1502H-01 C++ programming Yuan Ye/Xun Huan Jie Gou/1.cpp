#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int c=0;
    cin>>a>>b;
    if(b>=10000) b=10000;
    for(int i=a;i<=b;i++){
            if(i==(i%10)*(i%10)*(i%10)+(i/10%10)*(i/10%10)*(i/10%10)+(i/100%10)*(i/100%10)*(i/100%10)+(i/1000%10)*(i/1000%10)*(i/1000%10)){
            cout<<i<<" ";
            c=1;
        }
    }
    if(c==0) cout<<"no";
    return 0;
}
