#include <iostream>
using namespace std;
int sum = 0;
int stair(int pp) {
    if (pp > 2) return stair(pp - 1) +   stair(pp - 2);
    if (pp == 1 || pp == 0 || pp == 2) return pp;
}
int main()
{
    int n;
    cin >> n;
    cout << stair(n);
    return 0;
}

