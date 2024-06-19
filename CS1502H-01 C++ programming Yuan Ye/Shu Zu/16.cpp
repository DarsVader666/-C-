#include<iostream>
using namespace std;
int main() {
    int a[105] = { 0 };
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int temp;

    for (int i = 0; i < n; i++) {
        if (i == 1) {
            if (a[0] > a[1]) {
                temp = a[0];
                a[0] = a[1];
                a[1] = temp;
            }
        }
        else if (i >= 2) {
            temp = a[i];
            for (int j = 0; j < i-1; j++) {
                if (a[i] < a[0]) {
                    for (int k = i - 1; k >= 0; k--) {
                        a[k + 1] = a[k];
                    }
                    a[0] = temp;
                }
                else if (a[i] >= a[j] && a[i] <= a[j + 1]) {
                    for (int k = i - 1; k >= j + 1; k--) {
                        a[k + 1] = a[k];
                    }
                    a[j + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}