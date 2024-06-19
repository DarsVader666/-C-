#include<iostream>

using namespace std;
int dg(int n) {
	if (n == 0) return 0;
	return 2 + dg(n - 1);
}
int main()
{
	int n;
	cin >> n;
	cout << 10 + dg(n-1);
	return 0;
}