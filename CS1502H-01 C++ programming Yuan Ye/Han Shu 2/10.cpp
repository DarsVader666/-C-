#include<iostream>
using namespace std;

int CountDigit(int number, int digit)
{
	int sum = 0;
	for (int i = 1; number / i >= 1; i*=10) {
		if (number / i % 10 == digit) sum++;
	}
	return sum;
}

int main()
{
	int number, digit;
	cin >> number >> digit;
	cout << CountDigit(number, digit) << endl;
	return 0;
}
