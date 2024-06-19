#include <iostream>
#include <cstring>
using namespace std;

char* julian(int year, int day) {
    //仅补全该函数，main函数保持不变
    if (day <= 0 || day > 366) return NULL;
    int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        m[1] += 1;
    }
    int i = 0;
    for (; i < 12; i++) {
        if (day > m[i]) day -= m[i];
        else break;
    }
    char* b[12] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
    char* a = new char[7];
    a[0] = b[i][0];
    a[1] = b[i][1];
    a[2] = b[i][2];
    a[3] = ' ';
    a[4] = day / 10 + '0'; a[5] = day % 10 + '0'; a[6] = '\0';
    return a;





}

int main() {
    int year, day;
    char* res;
    cin >> year >> day;
    res = julian(year, day);
    cout << res << endl;
    delete[]res;
    return 0;
}