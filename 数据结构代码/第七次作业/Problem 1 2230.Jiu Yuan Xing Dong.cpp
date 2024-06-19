#include<iostream>
using namespace std;

void merge(int* people, int low, int mid, int high) {
	int i, j, k;
	int* c = new int[high - low + 1];
	i = low, j = mid + 1, k = 0;
	while ((i <= mid) && (j <= high)) {
		if (people[i] <= people[j]) {
			c[k] = people[i];
			++i;
		}
		else {
			c[k] = people[j];
			++j;
		}
		++k;
	}
	while (i <= mid) {
		c[k] = people[i];
		++i;
		++k;
	}
	while (j <= high) {
		c[k] = people[j];
		++j;
		++k;
	}
	for (int i = 0; i < high - low + 1; i++) {
		people[i + low] = c[i];
	}
	delete[] c;
}
void mergeSort(int* people, int low, int high) {
	int mid;
	if (low >= high) return;
	mid = (low + high) / 2;
	mergeSort(people, low, mid);
	mergeSort(people, mid + 1, high);
	merge(people, low, mid, high);
}
void mergeSort(int* people, int n) {
	mergeSort(people, 0, n - 1);
}
int main() {
	int n = 0, limit = 0;
	scanf("%d",&n);
	scanf("%d", &limit);
	int* people = new int[n];
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d",&temp);
		people[i] = temp;
	}
		mergeSort(people, n);
		int count = 0, head = 0, rear = n - 1;
		while (head <= rear) {
			if (rear > head && people[head] + people[rear] <= limit) {
				head++;
				rear--;
				count++;
			}
			else {
				rear--;
				count++;
			}
		}
		printf("%d", count);
		delete[] people;
}