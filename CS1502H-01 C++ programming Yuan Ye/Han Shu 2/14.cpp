#include<iostream>
using namespace std;

void sort(int a[], int n,int constant) {
	if (n == constant) for (int i = 0; i < n; i++) cout << a[i]<<" ";
	else {
		for (int i = 0; i < n; i++) {//插入单个元素，把a[n]插入前n-1个中
			if (a[n] <= a[0]) {
				int temp = a[n];
				for (int j = n - 1; j >= 0; j--) {
					a[j + 1] = a[j];
				}
				a[0] = temp;
			}
			else if (a[n] >= a[i] && a[n] <= a[i + 1]) {
				int temp = a[n];
				for (int j = n - 1; j >= i + 1; j--) {
					a[j + 1] = a[j];
				}
				a[i + 1] = temp;
			}
		}
		sort(a, n+1, constant);
	}
}
int main()
{
	int n,a[1005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, 1, n);
	return 0;
}