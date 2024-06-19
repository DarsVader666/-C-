#include <iostream>
#include <cstring>
using namespace std;

void delchar(char* s1, char s2)   //递归函数定义
{
    //此处补全代码
    if (strlen(s1) == 1) {
        if (s1[0] == s2) s1[0] = '\0';
        return;
    }
    char a = s1[strlen(s1) - 1];
    s1[strlen(s1) - 1] = '\0';
    delchar(s1, s2);
    int d = strlen(s1);
    if (a != s2) s1[d] = a;
    s1[d + 1] = '\0';


}

void deletechar(char* str1, const char* str2) {
    //在此处补全代码
    int i = 0;
    while (str2[i] != '\0') {
        delchar(str1, str2[i]);
        i++;

    }
}

int main() {
    char str1[80] = { '\0' };
    char str2[80] = { '\0' };
    cin.getline(str1, 80);
    cin.getline(str2, 80);
    deletechar(str1, str2);

    cout << str1 << endl;
    return 0;
}