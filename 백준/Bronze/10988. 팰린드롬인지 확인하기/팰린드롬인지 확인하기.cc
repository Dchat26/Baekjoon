#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int len = s.length();
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) cout << 1 << "\n";
    else cout << 0 << "\n";

    return 0;
}