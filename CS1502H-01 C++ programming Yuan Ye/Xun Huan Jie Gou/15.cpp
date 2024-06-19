#include <iostream>
using namespace std;

int main()
{
    int x,i=1;
    cin>>x;
    while(i*i<=x){
        i++;
    }
    cout<<i-1;
    return 0;
}
