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
    float a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    double av;
    av=(a1+a2+a3+a4)/4;
    cout<<fixed<<setprecision(2)<<"平均值是"<<av;
	
    /********** End **********/
	//cout << "a=" << setprecision(2) << a <<endl; 
    

  return 0;
}


