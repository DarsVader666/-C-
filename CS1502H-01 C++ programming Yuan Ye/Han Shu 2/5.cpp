#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    /*************begin***************/
    int n,a[1005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n );
    int time = 0;
    if(n%2==0){
        for (int i = n-1; i >=2; i-=2) {
            if (2 * a[1] + a[0] + a[i] > 2 * a[0] + a[i] + a[i - 1]) time += 2 * a[0] + a[i] + a[i - 1];
            else time += 2 * a[1] + a[0] + a[i];
        }
        cout << time + a[0] + a[1]; 
    }
    if(n%2==1){
        for (int i = n - 1; i >= 3; i -= 2) {
            if (2 * a[1] + a[0] + a[i] > 2 * a[0] + a[i] + a[i - 1]) time += 2 * a[0] + a[i] + a[i - 1];
            else time += 2 * a[1] + a[0] + a[i];
        }
        cout << time + a[0] + a[1]+a[2];
    }
   /*************end******************/

    return 0;
}
