#include<iostream>
#include <stdio.h> 
#include <math.h> 
#include <iomanip>

using namespace std;
int main() 
{

    // 请在此添加代码
    /********** Begin *********/
	cout.setf(ios::fixed);
    int a,b,c,d;
    cin>>a;
    b=a/100;
    c=(a/10)%10;
	d=a%10;
    cout<<a<<"的百位数字是"<<b<<"，十位数字是"<<c<<"，个位数字是"<<d;
    /********** End **********/
	//cout << "a=" << setprecision(2) << a <<endl; 
    

  return 0;
}


