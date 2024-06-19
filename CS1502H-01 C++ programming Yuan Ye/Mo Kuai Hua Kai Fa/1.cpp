#include <iostream>
#include <cstdio>

using namespace std;

void showOption() {
	cout << "欢迎使用股票分析系统：" << endl;
	cout << "1--输入股票价格序列" << endl;
	cout << "2--查询股票价格" << endl;
	cout << "3--输出升序的股票价格序列" << endl;
	cout << "4--输出最大值和最小值的日期" << endl;
	cout << "5--一笔交易的最大利润" << endl;
	cout << "6--多笔交易的最大利润" << endl;
	cout << "7--退出" << endl;
}
// Your code here
void sort(int a[], int i) {
	int temp;
	int t[10];
	for (int j = 0; j < i; j++) {
		t[j] = a[j];
	}
	for (int j = 0; j < i; j++) {
		for (int k = j + 1; k < i; k++) {
			if (t[j] > t[k]) {
				temp = t[j];
				t[j] = t[k];
				t[k] = temp;
			}
		}
	}
	for (int j = 0; j < i; j++) cout << t[j] << " ";
	cout << endl;
}
void search(int a[], int i) {
	int max=0, min=0;
	for (int j = 1; j < i; j++) {
		if (a[max] < a[j]) max = j;
		if (a[min] > a[j]) min = j;
	}
	cout <<min<< " " << max<<endl;
}
void maxprofit(int a[],int i) {
	int max=0;
	for (int j = 0; j < i-1; j++) {
		for (int k = j + 1; k < i; k++) {
			if (a[k] - a[j] > max) max = a[k] - a[j];
		}
	}
	cout << max << endl;
}
void maxprofit2(int a[], int i) {
	int max = 0;
	for (int j = 0; j < i - 1; j++) {
		if (a[j] < a[j + 1]) max += -a[j] + a[j + 1];
	}
	cout << max << endl;
}
int main()
{
	showOption();
	int in;
	cin >> in;
	int i = 0;
	int gp[10];
	while (in != 7) {
		switch (in) {
			case 1: {
				int p;
				cin >> p;
				while (p != -1) {
					gp[i] = p;
					cin >> p;
					i++;
				}
				break;
			}
			case 2: {
				for (int j = 0; j < i; j++) {
					cout << gp[j] << " ";
				}
				cout << endl;
				break;
			}
			case 3: {
				sort(gp, i);
				break;
			}
			case 4: {
				search(gp, i);
				break;
			}
			case 5: {
				maxprofit(gp,i);
				break;
			}
			case 6: {
				maxprofit2(gp, i);
				break;
			}
		}
		cin >> in;
	}
	// Your code here
	return 0;
}