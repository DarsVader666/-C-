#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp1,temp2,temp;
    cin>>temp1>>temp2;
    if(temp1<temp2){
        temp=temp2;
        temp2=temp1;
        temp1=temp;
    }
    for(int i=1;i<=n-2;i++){
        cin>>temp;
        if(temp<=temp1&&temp>=temp2) temp2=temp;
        if(temp>=temp1) temp1=temp;
    }
    cout<<temp2;
    return 0;
}
