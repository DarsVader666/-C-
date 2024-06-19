#include <iostream>
#include<string.h>
using namespace std;

char* strrchr(char* str, char ch)
{
    int last=-1;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (*str == ch) {
            last = i;
        }
        if (i == len - 1) {
            if (last == -1) {
                return NULL;
            }
            else return str - len +1+ last;
        }
        str++;
    }
}

int main()
{
    
    char* str,a[60],ch;
    cin >> a>>ch;
    str=a;
    if (strrchr(str, ch) == NULL) cout << "no";
    else cout << strrchr(str, ch);
    return 0;
}