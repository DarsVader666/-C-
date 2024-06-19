#include<iostream>
#include<cstdio>
#include<cstring>
#define debug(x) cout<<#x<<" = "<<x<<endl;
using namespace std;

int k,n;
long long p[105],s[100005];

int main(){
    memset(s,0x7f,sizeof(s));
    
    cin>>k>>n;
    for(int i=1;i<=k;i++){
        cin>>p[i];
    }
    s[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            //er fen
            int l=0,r=i-1,mid;
            while(l<r){
                mid=(l+r)/2;
                if(s[mid]*p[j]>s[i-1])r=mid;
                else l=mid+1;
            }
            s[i]=min(s[i],p[j]*s[r]);
        }
//        debug(i); debug(s[i]);
    }
    cout<<s[n]<<endl;

    return 0;
}