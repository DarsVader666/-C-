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
    int a,b;
    cin>>a>>b;
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
    cout<<a<<"/"<<b<<"="<<a/b<<endl;
    cout<<a<<"%"<<b<<"="<<a%b<<endl;


	
    /********** End **********/
	//cout << "a=" << setprecision(2) << a <<endl; 
    

  return 0;
}


