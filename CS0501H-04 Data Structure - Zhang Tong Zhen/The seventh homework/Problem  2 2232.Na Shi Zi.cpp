#include<iostream>
using namespace std;

void merge(int* stein, int low, int mid, int high) {
	int i, j, k;
	int* c = new int[high - low + 1];
	i = low, j = mid + 1, k = 0;
	while ((i <= mid) && (j <= high)) {
		if (stein[i] <= stein[j]) {
			c[k] = stein[i];
			++i;
		}
		else {
			c[k] = stein[j];
			++j;
		}
		++k;
	}
	while (i <= mid) {
		c[k] = stein[i];
		++i;
		++k;
	}
	while (j <= high) {
		c[k] = stein[j];
		++j;
		++k;
	}
	for (int i = 0; i < high - low + 1; i++) {
		stein[i + low] = c[i];
	}
	delete[] c;
}
void mergeSort(int* stein, int low, int high) {
	int mid;
	if (low >= high) return;
	mid = (low + high) / 2;
	mergeSort(stein, low, mid);
	mergeSort(stein, mid + 1, high);
	merge(stein, low, mid, high);
}
void mergeSort(int* stein, int n) {
	mergeSort(stein, 0, n - 1);
}
void num(int& W, int& Z, int* stein, const int& n) {
	int head = 0, rear = n - 1,Wnum=0;
	bool flag = 0;
	while (1) {
		for (int i = rear; i >= head; i--) {
			if (stein[i] % 2 == 0) {
				W += stein[i];
				flag = 0;
				rear = i - 1;
				break;
			}
		}
		if (head <= rear) {
			Z += stein[head];
			head++;
		}
		if (flag) {
			for (int i = head; i < rear; i++) {
				Z += stein[i];
			}
			for (int i = head + 1 > rear + 1 ? head + 1 : rear + 1; i < n; i++) {
				if (stein[i] % 2 == 1) Z += stein[i];
			}
			break;
		}
		flag = 1;
	}
	/*while (1) {
		for (int i = rear; i >= head; i--) {
			if (stein[i] % 2 == 0) {
				W += stein[i];
				for (int j = i; j <= n - 2-Wnum; j++) {
					stein[j] = stein[j + 1];
				}
				stein[n - 1 - Wnum] = 0;
				Wnum++;
				flag = 0;
				break;
			}
			rear--;
		}
		if
	}*/


}

int main() {
	int n = 0, limit = 0, W = 0, Z = 0;
	scanf("%d", &n);
	int* stein = new int[n];
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		stein[i] = temp;
	}
	mergeSort(stein, n);
	num(W, Z, stein, n);
	if (W > Z) printf("%c", 'W');
	else if (W < Z) printf("%c", 'Z');
	else printf("%d", 0);
	delete[] stein;
}