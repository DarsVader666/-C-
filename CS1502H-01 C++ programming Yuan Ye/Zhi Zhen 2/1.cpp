#include <iostream>
#include <cstring>
using namespace std;

bool func(char array[ ], int len);

int main() {
    char ch[20];
    bool result;

    cin >> ch;

	//此处填补几行代码
    char *a=ch;
    if(func(ch,strlen(a))) cout<<"Yes";
    else cout<<"No";
    return 0;
}

bool func(char a[ ], int len) {
	//此处填补几行代码
    if(len==1) return true;
    if(len%2==0){
        for(int i=0;i<len/2;i++){
            if(a[i]!=a[len-1-i]) return false;
            if(i==len/2) return true;
        }
    }
    else{
            for(int i=0;i<(len-1)/2;i++){
                if(a[i]!=a[len-1-i]) return false;
                if(i==(len-3)/2) return true;
            }
        }
}