#include <iostream>
using  namespace std;
int main()
{
    char car;
    int inn,outt;
    cin>>car;
    cin>>inn>>outt;
    int m=outt-inn;
    int fee=0;
    if(car=='c'){
        if(m<=3) fee+=5*m;
        else fee+=10*m-15; 
    }
    else if(car=='b'){
        if(m<=2) fee+=10*m;
        else fee+=15*m-10;
    }
    else if(m<=1) fee+=10*m;
    else fee+=15*m-5;
    cout<<fee;
    return 0;
}