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
    a=getchar();
    b=getchar();
    c=getchar();
    d=getchar();
    cout<<char(a+29)<<char(b+29)<<char(c+29)<<char(d+29);
	
    /********** End **********/
	//cout << "a=" << setprecision(2) << a <<endl; 
    

  return 0;
}


