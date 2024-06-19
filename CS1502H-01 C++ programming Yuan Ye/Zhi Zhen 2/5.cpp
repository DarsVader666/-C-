#include <iostream>
#include<cstring>
using namespace std;

void deletechar(char* str1, const char* str2) {
    //在此处补全代码
    char str3[80];
    int i = 0, j = 0, k = 0;
    bool flag;
    while (str1[i] != '\0') {
        flag = false;
        j = 0;
        while (str2[j] != '\0') {
            if (str1[i] == str2[j]) { flag = true; break; }
            j++;
        }
        if (!flag) {
            str3[k] = str1[i];
            k++;
        }
        i++;
    }
    str3[k] = '\0';
    strcpy(str1, str3);
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