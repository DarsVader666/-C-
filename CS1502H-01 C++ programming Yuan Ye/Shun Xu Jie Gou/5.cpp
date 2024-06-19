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
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double a=(x1-x2)*(x1-x2);
    double b=(y1-y2)*(y1-y2);
    cout<<setprecision(2)<<sqrt(a+b)<<endl;

	
    /********** End **********/
	//cout << "a=" << setprecision(2) << a <<endl; 
    

  return 0;
}


