#include <iostream>
using namespace std;
int solve(int n, int m, int st, int dir) {
    if (n == 1) return 0;
    int k = dir ? (n - 1 - st + m - 1) : (st + m - 1);  
    int ndir = ((k / (n - 1)) & 1) ? (dir ^ 1) : dir;  
    k = (ndir ? (n - 1 - k % (n - 1)) : k % (n - 1));  
    int nst = ndir ? k - 1 : k;  
    int ret = solve(n - 1, m, nst, ndir);  
    return (ret >= k) ? ret + 1 : ret; 
}

int main() {
    int n, m;
    cin>>n>>m;
    cout<<solve(n, m, 0, 0) + 1;
    return 0;
}