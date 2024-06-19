#include <iostream>
#include <iomanip>
using namespace std;


double Calculate(double x, double y)
{
	// write your code here
	return 2 / (1 / x + 1 / y);
}
// 请不要修改main函数
int main()
{
	int t;
	double x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		cout << fixed << setprecision(3) << Calculate(x, y) << endl;
	}
}