#include <iostream>
#include "class.h"

using namespace std;

int main()
{
    int size = 0;
    cin>>size;
    safeArray a(size);//初始化大小为20的数组

    int setValue;
    int setIndex;
    for (int i=0;i<4;i++){
        cin>>setIndex>>setValue;
        a.set(setIndex, setValue);//赋值与判断
    }

    int getIndex;
    int getValue;
    for (int i = 0; i <4 ; ++i) {
        cin>>getIndex;

        if (a.get(getIndex,getValue))//判断是否越界
        cout<<getValue<<endl;
    }

    int lowBound;
    int highBound;
    cin>>lowBound>>highBound;

    safeArrayWithBound b(lowBound, highBound);

    for (int i=0;i<4;i++){
        cin>>setIndex>>setValue;
        b.set(setIndex, setValue);
    }

    for (int i = 0; i <4 ; ++i) {
        cin>>getIndex;
        if (b.get(getIndex, getValue))
            cout<<getValue<<endl;
    }

    return 0;
}