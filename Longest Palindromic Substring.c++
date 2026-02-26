#include <iostream>
using namespace std;

bool isPalindrome(string s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int maxLen = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(s, i, j))
                maxLen = max(maxLen, j - i + 1);
        }
    }

    cout << maxLen;
}
