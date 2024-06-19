#include <iostream>
using  namespace std;
int main()
{
    double x,y,q,w,e,r;
    cin>>x>>y;
    q=(x-2)*(x-2)+(y-2)*(y-2);
    w=(x+2)*(x+2)+(y-2)*(y-2);
    e=(x-2)*(x-2)+(y+2)*(y+2);
    r=(x+2)*(x+2)+(y+2)*(y+2);
    if(q>1&&w>1&&e>1&&r>1) cout<<0;
    else cout<<10;
    return 0;
}