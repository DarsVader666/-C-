#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    // 去除重复字符
    string uniqueStr = "";
    for (char c : str) {
        if (uniqueStr.find(c) == string::npos) {
            uniqueStr += c;
        }
    }
    
    // 按ASCII码值从大到小排序
    sort(uniqueStr.rbegin(), uniqueStr.rend());
    
    cout <<  uniqueStr << endl;
    
    return 0;
}