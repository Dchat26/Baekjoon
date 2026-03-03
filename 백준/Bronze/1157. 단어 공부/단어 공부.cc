#include <iostream>
#include <cctype>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int count[26] = { 0 };
    int max_val = 0;
    char result = '?';

    for (char c : s) {
        count[toupper(c) - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > max_val) {
            max_val = count[i];
            result = i + 'A';
        }
        else if (count[i] == max_val && max_val != 0) {
            result = '?';
        }
    }

    cout << result << "\n";

    return 0;
}