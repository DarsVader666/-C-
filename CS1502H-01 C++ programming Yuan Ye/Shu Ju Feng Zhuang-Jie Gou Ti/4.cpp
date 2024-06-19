#include <iostream>
#include<cmath>
using namespace std;
const int mod = pow(10, 9) + 7;
struct matrix {
    long long a, b, c, d;
}m, E;
void multi(matrix& m, matrix& n) {
    long long a =( m.a * n.a + m.b * n.c)%mod;
    long long b = (m.a * n.b + m.b * n.d)%mod;
    long long c = (m.c * n.a + m.d * n.c)%mod;
    long long d = (m.c * n.b + m.d * n.d)%mod;
    m.a = a;
    m.b = b;
    m.c = c;
    m.d = d;
}
void fpower(matrix& m, int n) {
    E.a = 1, E.b = 0, E.c = 0, E.d = 1;

    while (n) {
        if (n % 2) multi(E, m);
        multi(m, m);
        n /= 2;
    }
    m = E;
}
int main()
{
    long long n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    m.a = a;
    m.b = b;
    m.c = c;
    m.d = d;
    if (n == 0) {
        cout << 1 << ' ' << 0 << endl;
        cout << 0 << ' ' << 1;
        return 0;
    }
    fpower(m, n);
    if (m.a >= 0) cout << m.a << " ";
    else cout << m.a + mod << " ";
    if (m.b >= 0) cout << m.b;
    else cout << m.b + mod;
    cout << endl;
    if (m.c >= 0) cout << m.c << " ";
    else cout << m.c + mod << " ";
    if (m.d >= 0) cout << m.d;
    else cout << m.d + mod;
    return 0;
}
