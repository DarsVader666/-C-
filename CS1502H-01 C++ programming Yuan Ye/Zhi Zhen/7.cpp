#include <iostream>
using namespace std;

int main()
{
    int num, k;
    cin >> num;
    char ch,** ch1, ** ch2;//ch2是动态二维数组
    ch2 = new char* [num]; 
    for (int i = 0; i < num; i++) {
        *(ch2 + i) = new char[32];
        cin >> *(ch2 + i);
    }
    cin >> ch;
    for (int i = 0; i < num; i++) {
        for (int j = 0; ch2[i][j] != '\0'; j++) {
            if (ch2[i][j] == ch) {
                k = j;
                while (ch2[i][j]!='\0') {
                    ch2[i][j] = ch2[i][j + 1];
                    j++;
                }
                j = k - 1;
            }
        }
    }

    char max1 = 'z';
    char max2 = 'z';
    int *rec;
    rec= new int [num];
    int b = 0, flag = 0, m;
    while (max1 >= 'a') {
        for (int i = 0; i < num; i++) {
            if (ch2[i][0] == max1) {
                flag = 1;
                rec[b] = i;
                b++;
            }
        }
        if (flag == 1) {
            while (max2 >= 'a') {
                for (int i = 0; i < b; i++) {
                    m = rec[i];
                    if (ch2[m][1] == max2) {
                        cout << *(ch2 + m) << endl;
                    }
                }
                max2--;
            }
        }
        b=0;
        max2='z';
        max1--;
    }
    return 0;
}