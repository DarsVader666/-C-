#include<iostream>
using namespace std;

int GetApple(int a[], int height, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= height + 30) sum++;
	}
	return sum;
}

int main()
{
	int a[100],n,height;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> height;
	cout << GetApple(a, height, n);
	return 0;
}
