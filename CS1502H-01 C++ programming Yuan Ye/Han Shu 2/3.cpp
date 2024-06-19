#include<iostream>
using namespace std;

void valid(int n) {
    cout << n<<" ";
    if (n != 1) {
        if (n % 2 == 0) valid(n / 2);
        if (n % 2 != 0) valid(3 * n + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    valid(n);
    return 0;
}
