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
template<class sb>
sb Func(sb n) {
    
    int flag = 1;
    for (int i = 100; i < 999; i++) {
        if (n % i == 0) flag = i;
    }
    return flag;
}
int main()
{
    int n;
    cin >> n;
    if (n > 1000000 || n < 1000) {
        cout << "Input error!"; 
        return 0;
    }
    // Func(n)
    if (Func(n) == 1) cout<<"Not found!";
    else cout<< Func(n);
    return 0;
}

	int number, digit;
	cin >> number >> digit;
	cout << CountDigit(number, digit) << endl;
	return 0;
}
