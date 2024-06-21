#include<iostream>
using namespace std;
int main() {
	int *a,n,max,temp;
	cin >> n;
	a = new int[n];
	cin >> a[0];
	max = a[0], temp = a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		temp += a[i];
		if (temp > max) max = temp;
	}
	max >= 0 ? cout << max : cout << 0;
	delete[] a;

}