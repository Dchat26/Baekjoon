#include <iostream>
#include <string>
using namespace std;

bool isGroupWord(string s) {
    bool alp[26] = { false };

    for (int i = 0; i < s.length(); i++) {
        if (i > 0 && s[i] != s[i - 1]) {
            if (alp[s[i] - 'a'] == true) {
                return false;
            }
        }
        alp[s[i] - 'a'] = true;
    }
    return true;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, count = 0;

    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        string s;
        if (!(cin >> s)) return 0;

        if (isGroupWord(s)) count++;
    }

    cout << count << "\n";

    return 0;
}