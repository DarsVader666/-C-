#include<iostream>
using namespace std;

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
