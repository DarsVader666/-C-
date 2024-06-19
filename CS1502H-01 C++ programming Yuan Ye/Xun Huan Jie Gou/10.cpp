#include <iostream>
using namespace std;

int main() {
	int m, n, sum = 0;
	bool flag=1;
	cin >> n;
	m = n;
	while (n != 1) {
		if (n % 2 != 0 && n % 5 != 0 && n % 3 != 0) {
			cout << -1;
			flag=0;
			break;
		}
        if (n % 2 == 0) {
			sum++;
			n /= 2;
		}
        if (n % 3 == 0) {
			n = n * 2 / 3;
			sum++;
		}
		if (n % 5 == 0) {
			n = n * 4 / 5;
			sum++;
		}
	}
	if(flag) cout << sum ;
    system("pause");
    return 0;
}