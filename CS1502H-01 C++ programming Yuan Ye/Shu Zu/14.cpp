#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();
    unordered_set<char> uniqueChars;
    int maxLength = 0, i = 0, j = 0;
    
    while (i < n && j < n) {
        if (uniqueChars.find(s[j]) == uniqueChars.end()) {
            uniqueChars.insert(s[j]);
            j++;
            maxLength = max(maxLength, j - i);
        } else {
            uniqueChars.erase(s[i]);
            i++;
        }
    }
    
    return maxLength;
}

int main() {
    string str;
    cin >> str;

    int maxLength = lengthOfLongestSubstring(str);
    cout << maxLength << endl;

    return 0;
}
