#include <iostream>
using namespace std;

int f(int n, int m){
    return n == 1 ? n : (f(n - 1, m) + m - 1) % n + 1;
}
int main()
{
    int n;
    cin>>n;
    /*Start your code here*/
    cout<<f(n,3);

    /*end your code*/
    return 0;
}
