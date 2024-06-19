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
    int time;
    cin>>time;
    cout<<time/3600<<"小时"<<(time-time/3600*3600)/60<<"分"<<time%60<<"秒"<<endl;

	
    /********** End **********/
	//cout << "a=" << setprecision(2) << a <<endl; 
    

  return 0;
}


