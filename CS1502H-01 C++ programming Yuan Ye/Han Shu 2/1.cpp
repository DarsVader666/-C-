#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 2) return 1;
    else if (n == 1) return 0;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return 0;
        }
        return 1;
    }
}

int main()
{
    int m, n,flag=0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (isPrime(i)) flag++;
    }
    cout << flag;
    return 0;
}