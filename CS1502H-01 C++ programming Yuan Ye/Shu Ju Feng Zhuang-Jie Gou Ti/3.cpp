#include <iostream>
#include<cstring>
using namespace std;

struct txl {
    string name, tel;
    int year, month, day;
    char add[50];
};
txl a[10];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].name;
        cin >> a[i].year;
        cin >> a[i].month;
        cin >> a[i].day;
        cin >> a[i].tel;
        cin.getline(a[i].add, 50, '\n');
    }
    int seq[10] = { 0 };
    for (int i = 0; i < n; i++) {
        seq[i] = i;
    }
    int temp;
    temp = seq[0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[seq[j+1]].year == a[seq[j]].year) {
                if (a[seq[j+1]].month == a[seq[j]].month) {
                    if (a[seq[j + 1]].day > a[seq[j]].day) {
                        temp = seq[j];
                        seq[j] = seq[j + 1];
                        seq[j + 1] = temp;
                    }
                }
                else if (a[seq[j + 1]].month > a[seq[j]].month) {
                    temp = seq[j];
                    seq[j] = seq[j + 1];
                    seq[j + 1] = temp;
                }
            }
            else if (a[seq[j + 1]].year > a[seq[j]].year) {
                temp = seq[j];
                seq[j] = seq[j + 1];
                seq[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[seq[i]].name << " " << a[seq[i]].year << " " << a[seq[i]].month << " " << a[seq[i]].day << " " << a[seq[i]].tel << a[seq[i]].add << endl;
    }
    return 0;
}
