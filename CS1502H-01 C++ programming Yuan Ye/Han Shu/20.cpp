#include <bits/stdc++.h>
#define N 100010
using namespace std;
int n;
int a[N], b[N];

// 合并操作
void merge(int l, int r) {
    for (int i = l; i <= r; ++i) b[i] = a[i]; // 将a数组对应位置复制进辅助数组
    
    int mid = l + r >> 1;           // 计算两个子段的分界线
    int i = l, j = mid + 1;         // 初始化i和j两个指针分别指向两个子段的首位
    for (int k = l; k <= r; ++k) {  // 枚举原数组的对应位置
        if (j > r || i <= mid && b[i] < b[j]) a[k] = b[i++]; // 上文中列举的条件
        else a[k] = b[j++];
    }
}

void merge_sort(int l, int r) { // l和r分别代表当前排序子段在原序列中左右端点的位置
    if (l >= r) return;         // 当子段为空或者长度为1，说明它已经有序，所以退出该函数
    int mid = l + r >> 1;       // 取序列的中间位置，并将序列分成两部分（左右长度相差最多为1）
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    merge(l, r);                // 将l..mid和mid+1..r两个子段合并成完整的l..r的有序序列
}

int main() {
    // 输入
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
	
    // 归并排序 
    merge_sort(1, n);
	
    // 输出
    for (int i = 1; i <= n; ++i) printf("%d ", a[i]); 
    return 0;
}
