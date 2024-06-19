#include<iostream>  
using namespace std;
int jc(int p) {
	if (p == 1)return 1;
	return jc(p - 1)*p;
}
int main() {
	int m, n;
	cin >> n >> m;
	if (m == n) {
		cout << 1;
		return 0;
	}
	if (m > n) {
		cout << "wrong!";
		return 0;
	}
	cout << jc(n)/ (jc(m) * jc(n - m));
	return 0;
}
