#include <iostream>
using namespace std;

int main()
{
    int n,p=1;
    cin>>n;
    int i=0;
    for(;i<=31;i++){
        if(n-p==0){
            cout<<"true";
            break;
        }
        p*=2;
    }
    if(i==32){
        cout<<"false";
    }
    return 0;
}
