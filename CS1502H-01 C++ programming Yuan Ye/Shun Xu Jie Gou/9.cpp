#include <iostream>
using  namespace std;
int main()
{
    //输入你的代码
    double cr;
    double crr;
    cin>>cr;
    crr=cr*0.6;
    cout<<int(crr)<<" "<<(crr-int(crr))*10;
    return 0;
}