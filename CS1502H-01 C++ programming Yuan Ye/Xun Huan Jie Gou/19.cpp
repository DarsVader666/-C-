#include <iostream>
using namespace std;

int main()
{
    int m,n;
    bool judge=0;
    cin>>m>>n;
    int rec=0;
    for(int i=m;i<n;i++){
        for(int j=1;j<i;j++){
            if(i%j==0) rec+=j;
        }
        if(rec==i){
            cout<<i<<" ";
            judge=1;
        }
        rec=0;
    }
    if(!judge) cout<<-1;
    return 0;
}
