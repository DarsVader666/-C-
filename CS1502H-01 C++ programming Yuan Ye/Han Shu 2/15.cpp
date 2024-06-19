#include <iostream>

using namespace std;

int cal_routines(int m, int n) {
    // write your code here
    if (m == 1 || n == 1) return 1;
    return cal_routines(m - 1, n) + cal_routines(m, n - 1);
}
// NEVER EDIT THE MAIN FUNCTION
int main()
{
    int m, n;
    cin >> m >> n;
    cout << cal_routines(m, n) << endl;
}s