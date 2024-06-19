#include<iostream>
using namespace std;
int main() {
    int a = 114514, n;
    cin >> n;
    //穷举法
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= (n - i) / 5; j++) {
            for (int k = 0; k <= (n - i - 5 * j) / 16; k++) {
                for (int l = 0; l <= (n - i - 5 * j - 16 * k) / 23; l++) {
                    for (int m = 0; m <= (n - i - 5 * j - 16 * k - 23 * l) / 33; m++) {
                        if (i + 5 * j + 16 * k + 23 * l + 33 * m == n) {
                            if (i + j + k + l + m < a) a = i + j + k + l + m;
                        }
                    }
                }
            }
        }
    }
    cout << a;
    a = 0;
    while (n >= 33) {
        n -= 33;
        a++;
    }
    while (n >= 23) {
        n -= 23;
        a++;
    }
    while (n >= 16) {
        n -= 16;
        a++;
    }
    while (n >= 5) {
        n -= 5;
        a++;
    }
    while (n >= 1) { 
        n--;
        a++;
    }
    cout <<" "<<a;
    return 0;
}