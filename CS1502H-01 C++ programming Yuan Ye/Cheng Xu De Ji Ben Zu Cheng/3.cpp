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
    int r;
    cin>>r;
    cout<<"半径为"<<r<<"的球体积为"<<setprecision(1)<<3.14*r*r*r*4/3<<endl;
    cout<<"半径为"<<r<<"的球体表面积为"<<setprecision(1)<<4*3.14*r*r<<endl;
	
    /********** End **********/
	//cout << "a=" << setprecision(2) << a <<endl; 
    

  return 0;
}


