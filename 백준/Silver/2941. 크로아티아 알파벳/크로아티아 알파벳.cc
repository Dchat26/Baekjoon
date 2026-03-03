#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int len = s.length();
    int count = 0;

    for (int i = 0; i < len; i++) {
        char c = s[i];

        if (c == 'c') {
            if (s[i + 1] == '=' || s[i + 1] == '-') i++;
        }
        else if (c == 'd') {
            if (s[i + 1] == '-') i++;
            else if (s[i + 1] == 'z' && s[i + 2] == '=') i += 2;
        }
        else if (c == 'l' || c == 'n') {
            if (s[i + 1] == 'j') i++;
        }
        else if (c == 's' || c == 'z') {
            if (s[i + 1] == '=') i++;
        }

        count++;
    }

    cout << count << "\n";

    return 0;
}