#include<iostream>
#include<vector>
#include<string>
#define MAX_SIZE 114514
using namespace std;

int hashFunc(const string &s) {
    int hash = 0;
    for (char ch : s) {
        hash = hash * 31 + ch;
        hash %= MAX_SIZE; // 只需要对MAX_SIZE取模
    }
    return hash;
}
bool insert(vector<string> &hashTable, const string &s, int index) {
    if (index < 0 || index >= MAX_SIZE) return false; // 确保索引在有效范围内
    if (hashTable[index].empty()) {
        hashTable[index] = s;
        return true;
    }
    // 如果当前位置已被占用且不是相同字符串，继续寻找
    if (hashTable[index] != s) {
        return insert(hashTable, s, (index + 1 + hashFunc(s)) % MAX_SIZE);
    }
    return false; // 如果找到相同的字符串，不插入
}
bool contains(const string &s, vector<string> &hashTable, int index) {
    if (index < 0 || index >= MAX_SIZE) return false; // 确保索引在有效范围内
    if (hashTable[index].empty()) {
        return false;
    }
    if (hashTable[index] == s) {
        return true;
    }
    // 如果当前位置不是相同字符串，继续寻找
    return contains(s, hashTable, (index + 1 + hashFunc(s)) % MAX_SIZE);
}
int main() {
    int N;
    cin >> N;
    string s;
    vector<string> hashTable(MAX_SIZE); // 初始化哈希表
    int uniqueCount = 0;

    for (int i = 0; i < N; i++) {
        cin >> s;
        int index = hashFunc(s);
        // 检查是否已经包含该字符串
        if (!contains(s, hashTable, index)) {
            // 插入新字符串
            if (insert(hashTable, s, index)) {
                uniqueCount++;
            }
        }
    }
    cout << uniqueCount << endl; // 输出不同字符串的数量，并添加换行符
    return 0;
}