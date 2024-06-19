#include<iostream>
using namespace std;

int main()
{
	int a,n=0,arr[100],flag=0;
	while (cin >> a) {
		arr[n]=a;
		n++;
	}
	for (int i = 0; i < n-1; i++) {
		if (arr[i] > arr[i + 1]) flag++;
	}
	if (flag >= 2) cout << "false";
	else cout << "true";
	return 0;
}