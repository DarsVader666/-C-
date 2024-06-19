#include <iostream>
using namespace std;

int main()
{
    int a[20][20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss=0;
    int tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt=0;
    int uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt++;
            }
        }
        if(tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt>ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss){
            ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss=tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt;
            uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu=i;
        }
        tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt=0;
    }
    cout<<uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu;

    return 0;
}