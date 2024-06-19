#include <iostream>
using namespace std;

int sear(const int *x, const int &head, const int &rear, const int &target) {
        if (head > rear)
		return -1;
	int mid = head + (rear - head) / 2;
	if (target == x[mid])
		return (rear + head) / 2;
	else if (target > x[mid])
		return sear(x, mid + 1, rear, target);
	else
		 return sear(x, head, mid - 1, target);
	
}

int main() {
	int m, n;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	cin >> m;
	int temp;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		cout << sear(array, 0, n - 1, temp) << endl;
	}
}