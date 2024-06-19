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
    double a,b,c;
    cin>>a>>b>>c;
    double p=(a+b+c)/2;
    double S=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<setprecision(2)<<S<<endl;
	
    /********** End **********/
	//cout << "a=" << setprecision(2) << a <<endl; 
    

  return 0;
}


