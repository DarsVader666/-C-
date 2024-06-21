#include<iostream>
using namespace std;
int main() {
	int m, *a, sum = 0, judge;
	cin >> m;
	a = new int[m];
	for (int i = 0; i < m; i++) cin >> a[i];
	judge = a[0];
	for (int i = 1; i < m; ) {
		judge += a[i];
		if (a[i] > 13) {cout << "you died"; return 0;
	}
		if (judge > 13) {
			judge =0 ;
			sum += 20;
		}
		else { i++; }
	}
	cout << sum + judge;
	delete[]a;
	return 0;
}