#include <iostream>
#include<string.h>
using namespace std;
char* oddstr(char str[200]) {
    char temp[100] = { '\0' };
    int current = 0;
    int len = strlen(str);
    for (int i = 0; i < len / 2 && str[2 * i + 1] != '\0'; i++) {
        temp[i] = str[2*i + 1];
        current = i;
    }
    temp[current + 1] = '\0';
    char* odd = new char[current + 1];
    strcpy(odd, temp);
    return odd;

}
int main() {
    char str[200];
    cin >> str;
    char* odd = oddstr(str);
    cout << odd << endl;
    delete[]odd;
    return 0;
}
