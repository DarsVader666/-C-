#include <iostream>
using namespace std;

int main()
{
    int b[114]={1,1};
    int i=1;
    while(b[i-1]!=0){
        cin>>b[i];
        i++;
    }
    int neg=0,pos=0;
    for(int j=1;j<=i;j++){
        if(b[j]>0) pos ++;
        else if(b[j]<0) neg++;
    }
    cout<<pos<<" "<<neg;
    return 0;
}
