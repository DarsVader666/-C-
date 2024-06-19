#include<iostream>
using namespace std;

bool perfectNumber(int n) {
    int p = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) p += i;
    }
    if (n == p) return 1;
    else return 0;
}

int main()
{
    int m, n,flag=0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (perfectNumber(i)) {
            cout << i<<" ";
            flag++;
        }
    }
    if (flag == 0) cout << -1;
    return 0;
}
