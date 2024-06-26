//
// Created by RadiumScriptTang on 2020/10/11.
//

#include <iostream>
using namespace std;

const int MAX_LENGTH = 10005;

template<class T>
T maxmin(T arr[], int length)
{
    // Begin your code here.
    T max = arr[0];
    T min = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) max = arr[i];
        else if (arr[i] < min) min = arr[i];
    }
    cout << max << " " << min<<endl;
    return 0;
}
int main()
{
    int m, n;
    int arr_int[MAX_LENGTH];
    double arr_double[MAX_LENGTH];

    // 输入m和整型数组
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr_int[i];
    }

    // 输入n和浮点型 数组
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr_double[i];
    }
    // 输出结果
    maxmin(arr_int, m);
    maxmin(arr_double, n);
}