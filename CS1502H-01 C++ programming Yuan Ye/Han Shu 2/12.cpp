#include<iostream>
using namespace std;

int Gcd(int m, int n) {
    if (n == 0)return m;
    else return Gcd(n, m % n);
}
int main()
{
    int m, n;

    cin >> m >> n;
    // Gcd()
    if (m < 1 || n < 1 || m>10000 || n>10000) {
        cout << "Input error!";
        return 0;
    }
    else {
        int k = Gcd(m, n);
        cout << m / k << "/" << n / k;
    }
    return 0;
}