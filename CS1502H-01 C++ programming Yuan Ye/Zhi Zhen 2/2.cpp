#include <iostream>
using namespace std;

int myfun(int* a, int* b) {
    int c = (*a - *b)%10;
    return c;
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << myfun(&x, &y) << ' ';
    cout << 3*x << ' ' << 2*y;
    return 0;
}

