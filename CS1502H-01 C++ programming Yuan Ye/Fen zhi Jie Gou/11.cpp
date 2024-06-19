#include <iostream>
using  namespace std;
int main()
{
    double n,m;
    cin>>n>>m;
    double x=2*n-0.5*m,y=0.5*m-n;
    if(x>0&&y>0&&x==(int)x&&y==(int)y) cout<<x<<" "<<y;
    else cout<<"no solution";
    return 0;
}